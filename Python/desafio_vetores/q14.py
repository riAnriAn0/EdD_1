""" 14. Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os
escreva na tela.
"""

numeros = [int(x) for x in input("Digite um numero: ").split()]
repitidos = []

for num in numeros:
    if (numeros.count(num) > 1) and not( num in repitidos):
        repitidos.append(num)

print(f"Repetidos: {repitidos}")