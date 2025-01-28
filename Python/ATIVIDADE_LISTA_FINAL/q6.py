alunos = []

for j in range(10): 
    notas = []   
    print("==========================")
    print(f"Aluno {j+1}\n")
    for i in range(4):
        notas.append(float(input(f"Digite sua {i+1}°:")))
    alunos.append(notas)

media = []

for aluno in alunos:
    media.append(sum(aluno)/4)

qnt_acima = 0

for i in media:
    if i >= 7:
        qnt_acima += 1

print("\n=======================")
print(f"Quantidade de Alunos acima na media: {qnt_acima}") 