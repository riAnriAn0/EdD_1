

def valorPagamento(valor, atraso):
    if atraso > 0:
        novoValor = valor + (valor * 0.03) + (valor * 0.001 * atraso)
        novoValor = round(novoValor, 2)
        return novoValor
    else:
        return valor

relatorio = {"Quantidade_Prestacoes": 0, "Valor_Total": 0}

print("="*30)
while True:
    
    valorprestao = float(input("Valor da Prestação:"))
    
    if valorprestao == 0:
        break
    
    diaAtraso = int(input("Dias de atraso: "))

    valorApagar = valorPagamento(valorprestao, diaAtraso)

    relatorio["Quantidade_Prestacoes"] += 1
    relatorio["Valor_Total"] += valorApagar 

    print(f"Valor a ser pago: {valorApagar} R$")
    print("="*30)


print("\n")
print("="*30)
print("Ralatório")
print("="*30)
for valor in relatorio:
    print(f"{valor}: {relatorio[valor]}")



