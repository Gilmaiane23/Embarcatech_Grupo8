#include <stdio.h>
#include "funcoes.c"
#include <locale.h>   //naoconseguiatualizaraacentuação

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int op = -1;
    
    // Loop principal até o usuário optar por sair
    while (op != 0)
    {
        menu();  // Exibe o menu
        scanf("%d", &op);
        
        // Limpeza da tela (funciona em sistemas Windows e Unix)
        // system("clear || cls");

        switch (op)
        {
            case 1: // Conversão de Comprimento
                converterComprimento();
                break;

            case 2: // Conversão de Massa
                converterMassa(); 
                break;

            case 3: // Conversão de Volume
                converterVolume();
                break;

            case 4: // Conversão de Temperatura
                converterTemperatura();
                break;

            case 5: // Conversão de Velocidade
                convertVelocidade();
                break;

            case 6: // Conversão de Energia
                converterEnergia();
                break;

            case 7: // Conversão de Tempo
                unidade_tempo();
                break;

            case 0:
                // Mensagem de despedida
                printf("\nObrigado por utilizar o programa :)\nPressione ENTER para sair: \n");
                scanf("%*c");  // Limpa o buffer
                scanf("%*c");  // Espera o usuário pressionar uma tecla
                break;

            default:
                // Caso o usuário insira uma opção inválida
                printf("\nEssa opção não existe.\nPressione qualquer tecla para continuar: \n");
                scanf("%*c");  // Limpa o buffer
                scanf("%*c");  // Espera o usuário pressionar uma tecla
                break;
        }

        printf("\nPressione qualquer tecla para continuar: \n");
        scanf("%*c");  // Limpa o buffer
        scanf("%*c");  // Espera o usuário pressionar uma tecla

        // Limpeza da tela após cada interação (funciona em sistemas Windows e Unix)
        // system("clear || cls");
    }
    
    return 0;
}
