
# 1. Faça um Programa que mostre a mensagem "Alo mundo" na tela.

print('Alo, mundo')

# 2. Faça um Programa que peça um número e então mostre a mensagem O
# número informado foi [número].

num = input("Digite um numero: ")
print(f'O numero informado foi: {num}')

# 3. Faça um Programa que peça dois números e imprima a soma.

num1 = int(input('Digite um numero: '))
num2 = int(input('Digite um numero: '))

resp = num1 + num2

print(f'Soma = {resp}')

# 4. Faça um Programa que peça as 4 notas bimestrais e mostre a média.

nota1 = float(input('Digite sua nota: '))
nota2 = float(input('Digite sua nota: '))
nota3 = float(input('Digite sua nota: '))
nota4 = float(input('Digite sua nota: '))

media = (nota1 + nota2 + nota3 + nota4)/4

print(media)

# 5. Faça um Programa que converta metros para centímetros.

metros = float(input('Metros: '))
centimetros = round(metros * 100)
print(f'Centimetros: {centimetros}')


# 6. Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

raio = float(input('Raio: '))
area =  3.14 * (raio ** 2)
print(f'Area aproximada de : {area}')

# 7. Faça um Programa que calcule a área de um quadrado, em seguida mostre
# o dobro desta área para o usuário.

larg = float(input('Largura: '))
area = 2 * (larg ** 2)
print(f'O dobra da area é : {area}')

# 8. Faça um Programa que pergunte quanto você ganha por hora e o número de
# horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido
# mês.

ganho = float(input('Ganho por horas: '))
horas = float(input('Quantos horas foram trabalhados: '))

salario = ganho * horas

print(f'Salario: R$ {salario}')