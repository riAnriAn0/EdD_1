notas = {}

for i in range(4):
    nota = float(input("Nota:"))
    notas[f"nota-{i}"] = nota

soma = sum(notas.values())

media = soma/ len(notas)

print("------------------------------")
for nota in notas:
    print(f"Nota: {notas[nota]}")

print(f"Media: {media}")
print(notas)