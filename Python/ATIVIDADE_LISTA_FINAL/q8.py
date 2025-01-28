pessoas = []

for i in range(5):
    pessoa = []
    print("="*15)
    pessoa.append(input("Digite seu nome:"))
    pessoa.append(int(input("Digite sua idade:")))
    pessoas.append(pessoa)

for i in range(4,0,-1):
    pessoa = pessoas[i]
    print("="*15)
    print(f"Nome: {pessoa[0]}")
    print(f"Nome: {pessoa[1]}")

