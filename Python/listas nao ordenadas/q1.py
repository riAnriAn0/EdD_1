""" 1. Simular uma lista de compras
1. Crie um programa que permite ao usuário adicionar itens a uma
lista de compras, verificar se um item está na lista e remover
itens. A lista não precisa estar ordenada.
"""

compras = []

def adicionar(lista, item):
    lista.append(item.lower())

def verificar(lista, item):

    if item.lower() in lista:
        return True
    else:
        return False

def remover(lista, item):
    retorno = verificar(lista, item)

    if retorno:
        lista.remove(item)
        return True
    else:
        return False

rodando = True
while rodando:
    print("="*30)
    print("LISTA DE COMPRAS")
    print("="*30)
    print("[1] Adicionar Item")
    print("[2] Verifiar Item")
    print("[3] Remover Item")
    print("[0] Sair em qualquer opção")

    opcao = input("Digite o valor da opção: ")

    if opcao == "0":
        run = False
    elif opcao == "1":
        run = True
        while run:
            item = input("Item: ")
            if item == "0":
                run = False
            adicionar(compras, item)
    elif opcao == "2":
        run = True
        while run:
            item = input("Item: ")
            if item == "0":
                run = False
            retorno = verificar(compras, item)
            if retorno:
                print("Item encrontrado!!!")
            else:
                print("Item não encrontrado!!!")

    elif opcao == "3":
        run = True
        while run:
            item = input("Item: ")
            if item == "0":
                run = False
            retorno = remover(compras, item)
            if retorno:
                print("Item removido!!!")
            else:
                print("Item não removido!!!")
    else:
        print("Opção invalida!!!")



    