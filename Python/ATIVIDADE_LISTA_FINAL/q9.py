numeros = [int(x) for x in input('Digite um numero:').split()]

soma = 0

for num in numeros:
    soma += pow(num,2)

print(f"Soma: {soma}")


