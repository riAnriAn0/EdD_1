def desenhar(rows = 1, cols = 1):
    if rows > 20:
        rows = 20
    elif rows < 1:
        rows = 1
    if cols > 20: 
        cols = 20
    elif cols < 1:
        cols = 1
    print("\n")
    print("+", end="")
    print("-"*cols, end="")
    print("+")

    for i in range(rows):
        print("|", end="")
        print(" "*cols, end="")
        print("|")

    print("+", end="")
    print("-"*cols, end="")
    print("+")

while True:
    rows = int(input("Numero de linhas: "))
    cols = int(input("Numero de colunas: "))

    desenhar(rows, cols)