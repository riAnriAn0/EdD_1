""""
18. Faça um programa que leia um vetor de 10 números. Leia um número x. Conte os múltiplos de
um número inteiro x num vetor e mostre-os na tela.
"""

numeros = [int(x) for x in input("Digite um numero: ").split()]
x = int(input("Digite um número: "))

multiplos = []

for num in numeros:
    if num % x == 0:
        multiplos.append(num)

print(f"Vetores: {multiplos}")