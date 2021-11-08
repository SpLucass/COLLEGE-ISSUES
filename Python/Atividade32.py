valor = int(input("Digite um valor positivo menor que 100: "))
while (valor<0 or valor>100):
    valor = int(input("Invalido! Digite um valor positivo menor que 100: "))
    
    
num=2
soma=3

for i in range (1, valor, 1):
    print (num)
    num=num+soma
    soma=soma+2

