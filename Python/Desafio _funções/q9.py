def convetData(data):
    dia = int(data[0:2])
    mes = int(data[3:5])
    ano = int(data[6:10])

    meses = ["Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho","Julho", "Agosto", "Setembro", "Outubro","Novembro", "Dezembro"]

    mesc31 = [1,3,5,7,8,10,12]
    mesc30 = [4,6,9,11]

    if mes > 12:
        return "invalido"
    
    if dia > 31 and mes in mesc31:
        return "invalido"

    if dia > 30 and mes in mesc30:
        return "invalido"

    if (ano % 4 == 0 and ano % 100 != 0) or (ano % 400 == 0):
        if mes == 2 and dia > 29:
            return "invalido"
    else:
        if mes == 2 and dia > 28:
            return "invalido"
    
    retorno = [dia, meses[mes-1],ano]

    return retorno
    
data = input("Digite a data (dd/mm/aaaa):")
dados = convetData(data)
if dados == "invalido":
    print("Data invalida!!!")
else:
    print(f"Data convertida: {dados[0]} de {dados[1]} de {dados[2]}")