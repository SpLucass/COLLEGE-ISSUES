acel = int(input("Aceleração (m/s^2): "))
inicial = int(input("Velocidade Inicial (m/s): "))
tempo = int(input("Tempo de trajeto: "))

MAX= inicial + (acel*tempo)

conv= MAX/3.6

if (conv<120):
    if (conv<40):
        print ("Veículo muito lento!")

    else:
        if (conv>80):
            print ("Veículo rápido!")

        else:
            if (conv>60):
                print ("Velocidade permitida!")

            else:
                print ("Velocidade de cruzeiro!")


else:
    print ("Veículo muito rápido!")