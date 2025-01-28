numeros_1 = [int(x) for x in input('Digite um numero:').split()]
numeros_2 = [int(x) for x in input('Digite um numero:').split()]
numeros_3 = [int(x) for x in input('Digite um numero:').split()]
numeros_4 = []

for i in range(3):
    numeros_4.append(numeros_1[i])
    numeros_4.append(numeros_2[i])
    numeros_4.append(numeros_3[i])

print(f"Numeros: {numeros_4}") 