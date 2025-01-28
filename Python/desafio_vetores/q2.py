""" 
2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
 """

inteiros = [int(x) for x in input("Digite um numero:").split()]
print(*inteiros)


