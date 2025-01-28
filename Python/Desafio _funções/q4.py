def convercaoHoras(horas, min, tipo):
    if horas > 12:
        horas -= 12
    
    if tipo.upper() == "A":
        tipo = "A.M."
    else: 
        tipo = "P.M."
    
    horasConvertida = {
        "horas":horas,
        "min":min,
        "tipo":tipo
    }

    return horasConvertida

def printarHoras(dadosHoras):
    print(f"Converção: {dadosHoras["horas"]}:{dadosHoras["min"]} {dadosHoras["tipo"]}")

rodando = True

while rodando:
    horas = int(input("Horas: "))
    minutos = int(input("Minutos: "))
    tipo = input("A / P :")

    dados = convercaoHoras(horas, minutos, tipo)
    printarHoras(dados)

    continuar = input("Deseja continuar (S/N): ")
    if continuar.upper() == "N":
        rodando = False
