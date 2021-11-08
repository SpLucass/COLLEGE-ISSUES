valor1 = float(input("Digite um valor positivo: "))

while (valor1<=0):
    valor1 = float(input("Invalido! Digite um número positivo: "))

print ("A tabuada de", valor1, "é:")

for i in range (1, 11, 1):

    tabuada= valor1*i
    print (valor1,"*", i, "=", tabuada )