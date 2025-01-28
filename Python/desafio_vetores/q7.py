""" 7. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor,
o maior elemento e a posição que ele se encontra.
"""
numeros = [int(x) for x in input("Digite um numero: ").split()]
print(f"Vetor: {numeros}\nMaior elemento: {max(numeros)}\nPosição do maior elemento: {numeros.index(max(numeros))}")