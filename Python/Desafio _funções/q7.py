def reverseNumer(numero):
    numero = numero[::-1]
    numero = int(numero)
    return numero

numero = input("Numero: ")

numeroReverso = reverseNumer(numero)

print(f"Numero Reverso: {numeroReverso}")