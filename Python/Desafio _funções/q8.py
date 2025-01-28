import random

def dado():
    numero = random.randrange(2,12,1)
    return numero

def logicaJogo(numero, jogada):
    global ponto

    if jogada == 1:
        if numero == 7 or numero == 11:
            return "V"
        elif numero == 2 or numero == 3 or numero == 12:
            return "P"
        else: 
            ponto = numero
            return ["C", ponto]
    else:
        if numero == ponto:
            return "V"
        elif numero == 7:
            return "P"
        else: 
            return ["C", ponto]
        
def regras():
    print("="*40)
    print("REGRAS")
    print("\n1 - Se, na primeira jogada, você tirar 7 ou 11, você um 'natural' e ganhou.")
    print("2 - Se você tirar 2, 3 ou 12 na primeira jogada, isto é chamado de 'craps' e você perdeu.")
    print("3 - Se, na primeira jogada, você fez um 4, 5, 6, 8, 9 ou 10, este é seu 'Ponto'. Seu objetivo agora é continuar jogando os dados até tirar este número novamente.")
    print("4 - No entanto, se tirar um 7 antes de tirar este Ponto novamente.\n\n")
    print("="*40)

regras()
jogada = 1
ponto = 0

while True:

    jogarDado = input("Press 'Enter' para jogar o dado !!!")
    numeroSortiado = dado()
    print(f"\nO numero que voçê tirou foi {numeroSortiado}")

    retorno = logicaJogo(numeroSortiado,jogada)

    if retorno[0] == "V":
        print("\nParabens você ganhou\n")
        print("="*30)
        break
    elif retorno[0] == "P":
        print("\nParabens você perdeu\n")
        print("="*30)
        break
    elif retorno[0] == "C":
        print(f"Seu ponto é: {retorno[1]}")
        print("Jogue novamente para vencer ou perder")
        print("="*30)
        print("\n")

    jogada += 1
    