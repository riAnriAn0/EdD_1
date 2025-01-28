alunos = []

for i in range(3):
    aluno = []
    print("="*15)
    aluno.append(int(input("Idade: ")))
    aluno.append(float(input("Altura: ")))
    alunos.append(aluno)

soma = 0
for aluno in alunos:
    soma += aluno[1]

media = soma/len(alunos)
media = round(media)

qnt_media = 0

for aluno in alunos:
    if (aluno[0] > 13) and (aluno[1] < media):
        qnt_media += 1

print("="*20)
print(f"Media: {media}")
print(f"Qnt de alunos com mais de 13 anos e acima dea media: {qnt_media}")
