a = int(input("Digite a medida 1: "))
b = int(input("Digite a medida 2: "))
c = int(input("Digite a medida 3: "))

s1= a*a
s2= b*b
s3= c*c

if (s1==(s2+s3) or s2==(s1+s3) or s3==(s2+s1) ):
    print ("São medidas de um TRIÂNGULO RETÂNGULO!")

else:
    print ("Não são medidas de um TRIÂNGULO RETÂNGULO!")
