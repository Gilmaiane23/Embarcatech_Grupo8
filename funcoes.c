#include <stdio.h>
#include "funcoes.h"
#include <locale.h>


// MENU
void menu(){
    printf("\n\n****************************************************************************************\n");
    printf("\t\t\tSuper conversor de unidades\n");
    printf("****************************************************************************************\n\n");
    printf("\t0 - Para sair do programa.\n");
    printf("\t1 - Conversao de unidades de comprimento.\n");
    printf("\t2 - Conversao de unidades de massa.\n");
    printf("\t3 - Conversao de unidades de volume.\n");
    printf("\t4 - Conversao de unidades de temperatura.\n");
    printf("\t5 - Conversao de unidades de velocidade.\n");
    printf("\t6 - Conversao de unidades de energia.\n");
    printf("\t7 - Conversao de unidades de tempo.\n");
    printf("\nEscolha uma das opcoes acima: ");
}

// CONVERSÕES

// 1 - Conversão comprimento Metro, cm, mm
void converterComprimento() {
    int opcao, continuar;
    float comprimento, resultado;

    while (1) {
        printf("Escolha a conversão desejada:\n");
        printf("1 - Metro(s) para Centímetro(s)\n");
        printf("2 - Metro(s) para Milímetro(s)\n");
        printf("3 - Centímetro(s) para Milímetro(s)\n");
        printf("4 - Centímetro(s) para Metro(s)\n");
        printf("5 - Milímetro(s) para Metro(s)\n");
        printf("6 - Milímetro(s) para Centímetro(s)\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o comprimento em Metro(s): ");
                scanf("%f", &comprimento);
                resultado = comprimento * 100;
                printf("%.2f Metro(s) equivalem a %.2f Centímetro(s).\n", comprimento, resultado);
                break;

            case 2:
                printf("Digite o comprimento em Metro(s): ");
                scanf("%f", &comprimento);
                resultado = comprimento * 1000;
                printf("%.2f Metro(s) equivalem a %.2f Milímetro(s).\n", comprimento, resultado);
                break;

            case 3:
                printf("Digite o comprimento em Centímetro(s): ");
                scanf("%f", &comprimento);
                resultado = comprimento * 10;
                printf("%.2f Centímetro(s) equivalem a %.2f Milímetro(s).\n", comprimento, resultado);
                break;

            case 4:
                printf("Digite o comprimento em Centímetro(s): ");
                scanf("%f", &comprimento);
                resultado = comprimento / 100;
                printf("%.2f Centímetro(s) equivalem a %.2f Metro(s).\n", comprimento, resultado);
                break;

            case 5:
                printf("Digite o comprimento em Milímetro(s): ");
                scanf("%f", &comprimento);
                resultado = comprimento / 1000;
                printf("%.2f Milímetro(s) equivalem a %.2f Metro(s).\n", comprimento, resultado);
                break;

            case 6:
                printf("Digite o comprimento em Milímetro(s): ");
                scanf("%f", &comprimento);
                resultado = comprimento / 10;
                printf("%.2f Milímetro(s) equivalem a %.2f Centímetro(s).\n", comprimento, resultado);
                break;

            default:
                printf("Opção inválida!\n");
                continue;
        }

        printf("\nDeseja:\n");
        printf("1 - Voltar para o menu\n");
        printf("2 - Sair\n");
        printf("Digite a opção: ");
        scanf("%d", &continuar);

        if (continuar == 2) {
            printf("Saindo...\n");
            break;
        }
    }
}

// 2 - Conversão tempo, segundo, minuto, hora
float segundo()
{
    float seg;
    printf("Digite os segundos: ");
    scanf("%f", &seg);
    return seg;
}

float minuto()
{
    float min;
    printf("Digite os minutos: ");
    scanf("%f", &min);
    return min;
}

float hora()
{
    float hora;
    printf("Digite as horas: ");
    scanf("%f", &hora);
    return hora;
}

void unidade_tempo()
{
    int numero;

    printf("Escolha uma opção para o seu valor:\n");
    printf("1 - Valor em segundos\n");
    printf("2 - Valor em minutos\n");
    printf("3 - Valor em horas\n");
    scanf("%d", &numero);

    if (numero < 1 || numero > 3)
    {
        printf("Opção inválida!\n");
    }
    else if (numero == 1)
    {
        // Segundos
        float seg, minuto, hora;
        seg = segundo();
        minuto = seg / 60.0;
        hora = seg / 3600.0;
        printf("Tempo em segundos: %.2f\n", seg);
        printf("Tempo em minutos: %.2f\n", minuto);
        printf("Tempo em horas: %.2f\n", hora);
    }
    else if (numero == 2)
    {
        // Minutos
        float segundo, min, hora;
        min = minuto();
        hora = min / 60.0;
        segundo = min * 60.0;
        printf("Tempo em segundos: %.2f\n", segundo);
        printf("Tempo em minutos: %.2f\n", min);
        printf("Tempo em horas: %.2f\n", hora);
    }
    else if (numero == 3)
    {
        // Horas
        float segundo, minuto, horas;
        horas = hora();
        minuto = horas * 60.0;
        segundo = horas * 3600.0;
        printf("Tempo em segundos: %.2f\n", segundo);
        printf("Tempo em minutos: %.2f\n", minuto);
        printf("Tempo em horas: %.2f\n", horas);
    }
}

// 3 - Função de Conversão de Volume
double obterFatorParaLitros(int unidade)
{
  switch (unidade)
  {
    case 1: // litro
      return 1.0;
    case 2:
      return 1.0 / 1000.0; // 1000 mL = 1 litro
    case 3:
      return 1000.0; // 1 m³ = 1000 litros
    default:
      return -1; // Unidade inválida
  }
}

int exibirSelecaoUnidade(const char *titulo)
{
  int escolha;
  printf("Selecione a unidade de %s:\n", titulo);
  printf("1 - Litro\n");
  printf("2 - Mililitro\n");
  printf("3 - Metro cubico\n");
  printf("Digite o numero correspondente: ");
  scanf("%d", &escolha);
  return escolha;
}

void converterVolume()
{
  int unidadeOrigem, unidadeDestino;
  double valor, fatorOrigem, fatorDestino, resultado;
  const char *unidades[] = {"", "litro", "mililitro", "metro cubico"};

  unidadeOrigem = exibirSelecaoUnidade("origem");
  fatorOrigem = obterFatorParaLitros(unidadeOrigem);
  if (fatorOrigem == -1)
  {
    printf("Unidade de origem invalida.\n");
    return;
  }

  unidadeDestino = exibirSelecaoUnidade("destino");
  fatorDestino = obterFatorParaLitros(unidadeDestino);
  if (fatorDestino == -1)
  {
    printf("Unidade de destino invalida.\n");
    return;
  }

  printf("Digite o valor a ser convertido: ");
  scanf("%lf", &valor);

  resultado = valor * fatorOrigem / fatorDestino;

  printf("%g %s equivale a %g %s\n",
         valor,
         unidades[unidadeOrigem],
         resultado,
         unidades[unidadeDestino]);
}

// 4 - Função de conversão de temperatura
void converterTemperatura(){
int opcao, continuar;
    float temperatura, resultado;
    while (1) {
    printf("Escolha a conversão desejada:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Fahrenheit para Kelvin\n");
    printf("5 - Kelvin para Celsius\n");
    printf("6 - Kelvin para Fahrenheit\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            // Conversão de Celsius para Fahrenheit
            printf("Digite a temperatura em Celsius:");
            scanf("%f", &temperatura);
            resultado = (temperatura * 9/5) + 32;
            printf("%.2f Celsius equivale a %.2f Fahrenheit.\n", temperatura, resultado);
            break;
        
        case 2:
            // Conversão de Celsius para kelvin
            printf("Digite a temperatura em Celsius:");
            scanf("%f", &temperatura);
            resultado = (temperatura + 273);
            printf("%.2f Celsius equivale a %.2f Kelvin.", temperatura, resultado);
            break;
        case 3:
            // Conversão de Fahrenheit para Celsius
            printf("Digite a temperatura em Fahrenheit:");
            scanf("%f", &temperatura);
            resultado = (temperatura - 32) * 5/9;
            printf("%.2f Fahrenheit equivale a %.2f Celsius.", temperatura, resultado);
            break;
        
         case 4:
            // Conversão de Fahrenheit para Kelvin
            printf("Digite a temperatura em Fahrenheit:");
            scanf("%f", &temperatura);
            resultado = (temperatura - 32) * (5/9) + 273;
            printf("%.2f Fahrenheit equivale a %.2f Kelvin.", temperatura, resultado);
            break;

         case 5:
            // Conversão de Kelvin para Celsius
            printf("Digite a temperatura em Kelvin:");
            scanf("%f", &temperatura);
            resultado = (temperatura - 273);
            printf("%.2f Kelvin equivale a %.2f Celsius.\n", temperatura, resultado);
            break;

         case 6:
            // Conversão de Kelvin para Fahrenheit
            printf("Digite a temperatura em Kelvin:");
            scanf("%f", &temperatura);
            resultado = (temperatura - 32) * 5/9;
            printf("%.2f Kelvin equivale a %.2f Fahrenheit.\n", temperatura, resultado);
            break;
            
    
        default:
            printf("Opção inválida!\n");
            continue;
    }
    printf("\nDeseja:\n");
    printf("1 - Voltar para o menu\n");
    printf("2 - Sair\n");
    printf("Digite a opção: ");
    scanf("%d", &continuar);

        if (continuar == 2) {
            printf("Saindo...\n");
            break;
        }
    }

   // return 0;
}

// 5 - Função de conversão de Massa, kg, tonelada...
void converterMassa(){
  float valor, valorOriginal;
  int origem, destino;
  const char *unidades[] = {"", "quilograma", "grama", "tonelada"};
  
  
  printf("Escolha a unidade de origem:\n");
  printf("1 - Quilograma\n");
  printf("2 - Grama\n");
  printf("3 - Tonelada\n");
  printf("Sua escolha: ");
  scanf("%d", &origem);

  printf("Digite o valor que deseja converter: ");
  scanf("%f", &valor);
  valorOriginal=valor;
  
  printf("Escolha a unidade de destino:\n");
  printf("1 - Quilograma\n");
  printf("2 - Grama\n");
  printf("3 - Tonelada\n");
  printf("Sua escolha: ");
  scanf("%d", &destino);

  if (origem == 1) {

    switch (destino)
    {
    case 1:
      
      break;

    case 2:
      valor*=1000;
      break;

    case 3:
      valor/=1000;
      break;
    
    default:
      break;
    }
  }
    // Se a unidade de origem for Grama (2)
    if (origem == 2) {
      switch (destino)
      {
      case 1:
        valor/=1000;
        break;

      case 2:
        
        break;

      case 3:
        valor*=1000000;;
        break;
      
      default:
        break;
      }
    }
    
    // Se a unidade de origem for Tonelada (3)
    if (origem == 3) {
    
    switch (destino)
    {
      case 1:
        valor*=1000;
        break;

      case 2:
        valor*=1000000;
        break;

      case 3:
        
        break;
      
      default:
        break;
   }
  }
  printf("%g %s equivale a %g %s\n",
         valorOriginal,
         unidades[origem],
         valor,
         unidades[destino]);
}

// 6 - Funções de Conversão de Unidade de Velocidade
float kmh_ms(float v){
  return v / 3.6;
}
float kmh_mph(float v){
  return v * 0.62;
}
float ms_kmh(float v){
  return v * 3.6;
}
float ms_mph(float v){
  return v * 2.24;
}
float mph_kmh(float v){
  return v * 1.61;
}
float mph_ms(float v){
  return v * 0.45;
}

// Função principal com menu de seleção de conversão
void convertVelocidade(){
  int op;
  float valor, conversao;

  /* 
  Menu com opções de conversões, cada uma associada a um número.
  Caso o usuário digite -1, o programa retorna ao menu principal 
  */

  do {
    printf("Conversões:\n");
    printf("1- km/h -> m/s\n");
    printf("2- km/h -> mph\n");
    printf("3- m/s -> km/h\n");
    printf("4- m/s -> mph\n");
    printf("5- mph -> km/h\n");
    printf("6- mph -> m/s\n");
    printf("Selecione a conversão desejada ou digite -1 para retornar: ");
    scanf("%d", &op);
    
    // Se a opção for diferente de -1, 
    // o programa segue solicitando o valor que se deseja converter
    if (op != -1){
      printf("Digite o valor a ser convertido: ");
      scanf("%f", &valor);
      printf("\n");
      printf("Resultado: \n");
      
      // Switch case que atualiza a variável "conversao" 
      // ao retorno da respectiva função de conversão
      switch(op){
        case 1:
          conversao = kmh_ms(valor);
          printf("%.2f km/h = %.2f m/s\n", valor, conversao);
          break;
        
        case 2:
          conversao = kmh_mph(valor);
          printf("%.2f km/h = %.2f mph\n", valor, conversao);
          break;
        case 3:
          conversao = ms_kmh(valor);
          printf("%.2f m/s = %.2f km/h\n", valor, conversao);
          break;
        case 4:
          conversao = ms_mph(valor);
          printf("%.2f m/s = %.2f mph\n", valor, conversao);
          break;
        case 5:
          conversao = mph_kmh(valor);
          printf("%.2f mph = %.2f km/h\n", valor, conversao);
          break;
        case 6:
          conversao = mph_ms(valor);
          printf("%.2f mph = %.2f m/s\n", valor, conversao);
          break;
        
        default:
          printf("Opção inválida. Tente outra.");
          break;
      }
    }
    
    // Aciona os comandos do sistema para pausar a tela no resultado, 
    // e apagar as informações do terminal

    // system("pause");
    // printf("Pressione qualquer tecla para continuar...");
    // system("clear || cls");

  } while(op != -1);
};

// 7 - Função de Conversão de Energia, W, Kw, cv
void convertEnergy(double value, int fromUnit, int toUnit) {
    double result;

    // Conversões baseadas nos fatores conhecidos
    switch (fromUnit) {
        // De watts (W)
        case 1: 
            if (toUnit == 2) {
                // Watts para kilowatts
                result = value / 1000.0; 
            } else if (toUnit == 3) {
                // Watts para cavalos-vapor
                result = value / 735.499; 
            } else {
                // Mesma unidade
                result = value; 
            }
            break;

        // De kilowatts (kW)
        case 2: 
            if (toUnit == 1) {
                // Kilowatts para watts
                result = value * 1000.0; 
            } else if (toUnit == 3) {
                // Kilowatts para cavalos-vapor
                result = (value * 1000.0) / 735.499;
            } else {
                // Mesma unidade
                result = value; 
            }
            break;

        // De cavalos-vapor (cv)
        case 3: 
            if (toUnit == 1) {
                // Cavalos-vapor para watts
                result = value * 735.499; 
            } else if (toUnit == 2) {
                // Cavalos-vapor para kilowatts
                result = (value * 735.499) / 1000.0; 
            } else {
                // Mesma unidade
                result = value;
            }
            break;

        default:
            printf("Unidade de origem inválida.\n");
            return;
    }

    // Exibe o resultado
    printf("Resultado: %.3f\n", result);
}

void converterEnergia() {
    double value;
    int fromUnit, toUnit;

    printf("Conversor de Unidades de Energia\n");
    printf("1. Watts (W)\n");
    printf("2. Kilowatts (kW)\n");
    printf("3. Cavalos-vapor (cv)\n");

    printf("\nDigite o valor a ser convertido: ");
    scanf("%lf", &value);

    printf("Escolha a unidade de origem (1-3): ");
    scanf("%d", &fromUnit);

    printf("Escolha a unidade de destino (1-3): ");
    scanf("%d", &toUnit);

    convertEnergy(value, fromUnit, toUnit);
}
