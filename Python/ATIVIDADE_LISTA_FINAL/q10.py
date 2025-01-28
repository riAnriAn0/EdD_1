numeros_1 = [int(x) for x in input('Digite um numero:').split()]
numeros_2 = [int(x) for x in input('Digite um numero:').split()]
numeros_3 = []

for i in range(10):
    numeros_3.append(numeros_1[i])
    numeros_3.append(numeros_2[i])

print(f"Numeros: {numeros_3}") 