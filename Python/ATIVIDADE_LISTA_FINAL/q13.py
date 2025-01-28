meses = ["JANEIRO","FEVEREIIRO","MARÇO","ABRIL","MAIO","JUNHO","JULHO","AGOSTO","SETEMBRO","OUTUBRO","NOVEMBRO","DEZEMBRO"]
temperaturas = [float(x) for x in input("Temperatura: ").split()]

media = sum(temperaturas)/len(temperaturas)

print("="*20)
for i in range(len(temperaturas)):
    if temperaturas[i] > media:
        print(f"{meses[i]} - {temperaturas[i]}ºC")
