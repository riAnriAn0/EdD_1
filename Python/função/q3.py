
import math

def area(raio):
    area = math.pi * pow(raio,2)
    return area

raio = float(input("Digite o raio da circulo:"))
area = area(raio)
print(f"Area: {area:.2f}")