def qntDigitos(numero):
    digitos = 0
    while numero > 0:
        numero = int(numero / 10)
        digitos += 1
    return digitos

numero = int(input("Numero: "))

digitos = qntDigitos(numero)

print(f"quantidade de digitos: {digitos}")

