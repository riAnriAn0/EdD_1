""" 
13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o
maior e o menor valor.
 """

numeros = [int(x) for x in input("Digite um numero: ").split()]
print(f"Posição do menor elemento: {numeros.index(min(numeros))}\nPosição do maior elemento: {numeros.index(max(numeros))}")