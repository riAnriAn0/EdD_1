#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume)
{
    *area = 4 * M_PI * powl(R, 2);
    *volume = (4 * M_PI * powl(R, 3)) / 3;
}

int main()
{
    float raio = 0, area = 0, volume = 0;

    printf("Digite o tamanho do raio: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("\nArea: %.1f\nVolume: %.1f", area, volume);

    return 0;
}
