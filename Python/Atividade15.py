peso = float(input("Peso: "))
altura = float(input("Altura: "))
 
IMC= peso/(altura*altura)

print("O IMC dessa pessoa é de",IMC)

if (IMC>20):
    if(IMC>25):
        print ("Essa pessoa não está no peso ideal")

    else:
        print ("Essa pessoa está no peso ideal")

else:
    print ("Essa pessoa não está no peso ideal")