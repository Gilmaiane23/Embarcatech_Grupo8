#include <stdio.h>
//8. Unidades de tempo (segundos, minutos, horas)

int segundo()
{
    int seg;
    printf("Digite os segundos: ");
    scanf("%d", &seg);
    return seg;
}

int minuto()
{
    int min;
    printf("Digite os minutos: ");
    scanf("%d", &min);
    return min;
}

int hora()
{
    int hora;
    printf("Digite as horas: ");
    scanf("%d", &hora);
    return hora;
}

int main()
{
    int numero;

    printf("Escolha uma opção:\n");
    printf("1 Para segundos\n");
    printf("2 Para minutos\n");
    printf("3 Para horas\n");
    scanf("%d", &numero);

    if (numero < 1 || numero > 3)
    {
        printf("Opção inválida!\n");
    }
    else if (numero == 1)
    {
        // Segundos
        int seg, minuto, hora;
        seg = segundo();
        minuto = seg / 60;
        hora = seg / 3600;
        printf("Tempo em segundos: %d\n", seg);
        printf("Tempo em minutos: %d\n", minuto);
        printf("Tempo em horas: %.d\n", hora);
    }
    else if (numero == 2)
    {
        // Minutos
        int segundo, min, hora;
        min = minuto();
        hora = min / 60;
        segundo = min * 60;
        printf("Tempo em segundos: %d\n", segundo);
        printf("Tempo em minutos: %d\n", min);
        printf("Tempo em horas: %.d\n", hora);
    }
    else if (numero == 3)
    {
        // Horas
        int segundo, minuto, horas;
        horas = hora();
        minuto = horas * 60;
        segundo = horas * 3600;
        printf("Tempo em segundos: %d\n", segundo);
        printf("Tempo em minutos: %d\n", minuto);
        printf("Tempo em horas: %d\n", horas);
    }

    return 0;
}
