frase = 'Aprender python é muito divertido!'

#========================================#
letras = len(frase)
print(letras)

#========================================#

maiusculo = frase.upper()
print(maiusculo)

#========================================#

palavra = "PYTHON"

if palavra in frase.upper():
    print('a palavra Python foi encontrada')
else:
    print('a palavra Python não foi encontrada')

#========================================#

frase_sub = frase.replace('divertido','facil', 1)
print(frase_sub)

#========================================#