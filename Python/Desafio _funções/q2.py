def  funcao(valor):
    if valor > 0:
        return "P"
    else:
        return "N"
    
valor = float(input("Digite um valor:"))

result = funcao(valor)
print(f"Resultado: {result}")