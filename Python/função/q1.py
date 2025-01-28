def media(num):
    return sum(num)/3

numeros = [float(x) for x in input("Digite o numero: ").split()]
media = media(numeros)
print(f"{media:.2f}")
