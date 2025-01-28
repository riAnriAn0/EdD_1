def converTemp(temp):
    temp_f = 1.8 * temp + 32
    return temp_f

temp_c = float(input("Temperatura em ºC:"))
temp_f = converTemp(temp_c)
print(f"Temperatura em Fahrenheit: {temp_f}ºF")
