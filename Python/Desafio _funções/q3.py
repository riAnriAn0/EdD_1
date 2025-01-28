def somaImposto(taxaImposto, custo):
    novoCusto = round(custo + (taxaImposto/100 * custo),2)
    return novoCusto

custoProduto = float(input("Custo do Produto: "))
imposto = float(input("Imposto (em %) : "))

novoCusto = somaImposto(imposto, custoProduto)

print(f"Novo valor do produto: {novoCusto} R$")