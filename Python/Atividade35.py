numeros = []

for i in range(0, 20, 1):
    x = int(input('Digite um numero: '))
    numeros.append (x)

y = int(input('\nDigite o multiplicador:'))

for i in range(0, 20, 1):
    numeros[i]=numeros[i]*y 
 
print('\nOs numeros que você digitou foram:\n')
 
# Exibir de forma crescente
for i in range(0, 20, 1):
    print(numeros[i])