numeros = []

for i in range(10):
    num = float(input("Digite um numero real: "))
    numeros.append(num)

numeros_ivn = reversed(numeros)

for num in numeros_ivn:
    print(num)
