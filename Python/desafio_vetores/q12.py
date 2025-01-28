""" 12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente
com o maior, o menor e a média dos valores. 
"""

numeros = [int(x) for x in input("Digite um numero: ").split()]
print(f"Vetor: {numeros}\nMaior elemento: {max(numeros)}\nMeno elemento: {min(numeros)}\nMedia: {(sum(numeros)/len(numeros))}")