valor1 = float(input("Digite um valor positivo: "))

while (valor1<=0):
    valor1 = float(input("Invalido! Digite um número positivo: "))

print ("Digite o intervalo da tabuada:")

valor2 = int(input("Valor 1: "))

valor3 = int(input("Valor 2: "))

while (valor2>valor3):
    print ("Invalido! O Valor 2 deve ser maior que o valor 1! Digite novamente:")

    valor2 = int(input("Valor 1: "))
    valor3 = int(input("Valor 2: "))


print ("A tabuada de", valor1, "no intervalo de", valor3, "a", valor2, "é:" )

for i in range (valor3, valor2-1, -1):

    tabuada= valor1*i
    print (valor1,"*", i, "=", tabuada )