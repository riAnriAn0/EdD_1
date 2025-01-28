""" 6. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá ser
impresso o maior e o menor elemento do vetor.
"""

numeros = [int(x) for x in input("Digite um numero: ").split()]
print(f"Maior:{max(numeros)}\nMenor:{min(numeros)}")
