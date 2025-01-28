
string = input("Digite uma string com 10 caracteres: ")

vogais = "AEIOUÃÉÊÂ"

QNT = 0

for letra in string:
    if not(letra.upper() in vogais):
        QNT += 1
    
print("---------------------------")
print(f"Quantidade de consoantes: {QNT}")    
for letra in string:
    if not(letra.upper() in vogais):
        print(f"Consoantes: {letra}")