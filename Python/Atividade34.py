numeros = []
comp=0
maior=0

for i in range(0, 10, 1):
    x = int(input('Digite um numero: '))
    numeros.append (x)
 
print('\nOs numeros que você digitou foram:\n')
 
# Exibir de forma crescente
for i in range(0, 10, 1):
    print(numeros[i])
    comp=numeros[i]
    if (comp>maior):
        maior=comp

print ("\n O maior número do vetor é o:", maior)