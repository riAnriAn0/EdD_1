import math

# 1. Elaborar um programa Python para verificar se um número é par ou ímpar.

num = int(input("Digigete un número: "))

if (num % 2 == 0):
    print("O numero é par")
else:
    print("O numero é impar")
# 2. Elaborar um programa Python para calcular as raízes da equação do
# segundo grau.

def raizres(a, b, c):
    delta = ((pow(b, 2) - 4 * a * c))

    if (delta < 0):
        print("A função não possui raizes reais!")
        return
    else:
        x_1 = (((-1 * b) +(math.sqrt(delta)))/(2 * a))
        x_2 = (((-1 * b) -(math.sqrt(delta)))/(2 * a))
        
        print(f"X_1 : {x_1}\nX_2 : {x_2}")

a = int(input("A: "))
b = int(input("B: "))
c = int(input("C: "))

raizres(a ,b ,c)

# 3. Elaborar um programa Python para verificar se uma string é um palíndromo.

string = input("Digite uma string: ")
string_inv = string[::-1]

if(string == string_inv):
    print("A string é um palíndromo")
else:
    print("A string não é palondromo")

# 4. Escreva um programa que peça ao usuário para inserir um número (inteiro
# ou decimal) como uma string e converta-o para o tipo correto (int ou float).

numero = input("Digite um numero:")

try:
    num_convet = int(numero)
    print(f'Inteiro : {num_convet}')
except:
    num_convet = float(numero)
    print(f'Float : {num_convet}')


# 5. Escreva um programa que peça ao usuário para inserir diferentes tipos de
# dados (número inteiro, número decimal, texto, valor booleano). O programa
# deve identificar e exibir o tipo de dado inserido. 

qnt_dados = int(input("Quantos dados serão inseridos: "))
dados = []
for _ in range(qnt_dados):
    dado = input("Digite: ")
    dados.append(dado)

def tipo_dado(dado):
    try: 
        valor = int(dado)
        return valor, type(valor).__name__
    except ValueError: 
        try:          
            valor = float(dado)
            return valor, type(valor).__name__
        except ValueError:         
            if dado.lower() == 'true':
                return True, 'bool'
            elif dado.lower() == 'false':
                return False, 'bool'
            else:      
                return dado, 'str'

for dado in dados:
    valor, tipo = tipo_dado(dado)
    print(f'{valor}: {tipo}')
