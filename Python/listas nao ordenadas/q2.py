"""
2. Crie uma função que verifica se dois vetores (listas) possuem os
mesmos elementos, independentemente da ordem. 
"""

def vereficar(lista1, lista2):
    for item in lista1:
        if not(item in lista2):
            return False
        
    for item in lista2:
        if not(item in lista1):
            return False
        
    return True

lista1 = [int(x) for x in input('Valores da lista 1: ').split()]
lista2 = [int(x) for x in input('Valores da lista 2: ').split()]

result = vereficar(lista1, lista2)

if result:
    print("As listas são iguais!!!\n")
else:
    print("As listas não são iguais!!!\n")
