numeros = []

for i in range(0, 5, 1):
    x = int(input('Digite um numero: '))
    numeros.append (x)
 
print('Os numeros que você digitou foram: ')
 
# Exibir de forma decrescente
for i in range(4, -1, -1):
    print(numeros[i])
