numeros = []

for i in range(5):
    num = int(input("Digite umm numero: "))
    numeros.append(num)

soma = sum(numeros)

multi = 1

for num in numeros:
    multi *= num

print('='*20)
print(f"Soma: {soma}")
print(f"Multiplicação: {multi}")
for num in numeros:
    print(f"Numero: {num}")
