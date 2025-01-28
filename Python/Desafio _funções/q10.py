import random

def embaralhar(string):

    string = string.lower()

    posicoes = [x for x in range(len(string))]
    random.shuffle(posicoes)

    novaString = []
    for p in posicoes:
        novaString.append(string[p])

    return "".join(novaString)


string = input("Digite sua palavra: ")
novaString = embaralhar(string)
print(f"String embaralhada: {novaString}")