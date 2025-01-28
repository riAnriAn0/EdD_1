numeros = []

for i in range(20):
    numeros.append(int(input("Digite um numero:")))

pares = []
impares = []

for num in numeros:
    if num % 2 == 0: 
        pares.append(num)
    else:
        impares.append(num)

print("=====================================================")
print(f"Numeros: {numeros}")
print(f"Numeros Pares: {pares}")
print(f"Numeros Impares: {impares}")