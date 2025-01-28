""" 8. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na
ordem inversa.
"""

numeros = [int(x) for x in input("Digite um numero: ").split()]
print(f"Vetor: {numeros[::-1]}")