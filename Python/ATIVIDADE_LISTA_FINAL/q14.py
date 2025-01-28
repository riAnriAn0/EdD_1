resp = []

for i in range(5):
    print(f"{perguntas[i]} // S/N")
    resp.append(input("Resposta: "))

qnt_resp = 0

for res in resp:
    if res.upper() == "S":
        qnt_resp += 1

if qnt_resp == 2:
    print("Situação: Suspeita")
elif (qnt_resp == 3) or (qnt_resp == 4):
    print("Situação: Cúmplice")
elif qnt_resp == 5:
    print("Situação: Assasino")
else:
    print("Situação: Inocente")
