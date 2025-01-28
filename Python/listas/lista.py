# 1. Crie uma lista contendo os números de 1 a 10 e imprima o
# quadrado de cada número.

numeros = []

for num in range(1,11):
    numeros.append(num)

for num in numeros:
    print(f'Numero: {num} Quadrado: {num ** 2}')

# 2. Adicione o número 11 ao final da lista e remova o número 5.

numeros.append(11)
numeros.remove(5)

for num in numeros:
    print(f'Numero: {num}')

# 3. Reordene a lista em ordem decrescente.

numeros_d = reversed(numeros)

for num in numeros_d:
    print(num)

# 4. Crie uma matriz (lista de listas) e acesse o valor na segunda
# linha e terceira coluna.

matriz = [
[1, 2, 3],
[4, 5, 6],
[7, 8, 9]
]

print(f"Matrix: {matriz[1][2]}")
