valor1 = float(input("Digite um número: "))
valor2 = float(input("Digite um número maior que o primeiro: "))

while (valor1>=valor2):
    valor2 = float(input("Invalido! Digite um número maior que o primeiro: "))

print ("Correto!" ,valor2 , "é maior que", valor1)