
# 1. Crie uma variável para armazenar o nome de uma pessoa, a idade e a altura dela. Em
# seguida, exiba esses valores.

pessoa = {'nome':'eduarda', 'idade': 15, 'altura': 1.65 }

for value in pessoa.values():
    print(value)

# 2. Crie uma lista com 5 números e mostre o segundo número da lista.

numeros = [1,2,3,4,5]
print(numeros[1])

# 3. Crie um dicionário com as informações de uma pessoa (nome, idade, cidade) e mostre o
# nome da pessoa.

pessoa = {'nome': 'nome_da_pessoa', 'idade': 19, 'cidade': 'caxias'}

print(pessoa['nome'])

# 4. Converta o número 45.67 (float) para um número inteiro e exiba o resultado.

num = 45.67
print(num)

num = int(num)
print(num)

# 5. Crie duas variáveis, x e y, com valores numéricos. Em seguida, realize as seguintes
# operações: Soma, Subtração, Multiplicação, Divisão. Exiba o tipo de dado do resultado de
# cada operação.

x = 5
y = 7

soma = x + y
subtracao = x - y
div = x / y
mult = x * y

print(f'soma: {soma} tipo: {type(soma)}')
print(f'subtração: {subtracao} tipo: {type(subtracao)}')
print(f'divisão: {div} tipo: {type(div)}')
print(f'multiplicação: {mult} tipo: {type(mult)}')