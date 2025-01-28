""" 9. Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores """

numeros = [int(x) for x in input("Digite um numero: ").split()]
pares =[]

for num in numeros:
    if num % 2 == 0:
        pares.append(num)

print(f"Vator: {pares}")
