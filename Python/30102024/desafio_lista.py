notas = []
rodando = True

while rodando:
    nota = float(input("Nota: "))
    if nota == -1:
        rodando = False
    else:
        notas.append(nota)

def qnt_valores(vetor):
    print(f"Qnt valores: {vetor.__len__()}")

qnt_valores(notas)

print(f"Valores: {notas}")

print("Valores invertidos: ")
valores_inv = notas.__reversed__()
for nota in valores_inv:
    print(nota)

soma = 0
for nota in notas:
    soma += nota

print(f"Soma: {soma}")

media = 0
for nota in notas:
    media += nota

media = media/ notas.__len__()

print(f"Media: {media}")

qnt_acima_media = 0
for nota in notas:
    if nota > media:
        qnt_acima_media += 1

print(f"Quantidade acima da media: {qnt_acima_media}")

qnt_abaixo_media = 0
for nota in notas:
    if nota > media:
        qnt_abaixo_media += 1

print(f"Quantidade abaixo da media: {qnt_abaixo_media}")

print("Boa noite!!!")