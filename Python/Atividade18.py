sexo = (input("Sexo: "))

if (sexo==("m") or sexo==("f")):

    peso = float(input("Peso: "))
    altura = float(input("Altura: "))
 
    IMC= peso/(altura*altura)

    print("O IMC dessa pessoa é de",IMC)

    if (sexo==("m")):
        if (IMC>20):
            if(IMC>25):
                print ("Essa pessoa não está no peso ideal")

            else:
                print ("Essa pessoa está no peso ideal")
        
        else:
            print ("Essa pessoa não está no peso ideal")

    else:
        if (IMC>19):
            if(IMC>24):
                print ("Essa pessoa não está no peso ideal")

            else:
                print ("Essa pessoa está no peso ideal")
        
        else:
            print ("Essa pessoa não está no peso ideal")


else:
    print ("Sexo inválido!")
    
