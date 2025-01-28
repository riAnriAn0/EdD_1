""" 5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
"""
numeros = [int(x) for x in input("Digite um numero: ").split()]
cont = 0

for num in numeros:
    if num % 2 == 0:
        cont += 1

print(f"{cont} valores par.")