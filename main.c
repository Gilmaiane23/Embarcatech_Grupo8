#include <stdio.h>

// FUNÇÕES

// 1 - Função de Conversão de Unidade de Volume
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

int main()
{
  converterVolume();
  return 0;
}
