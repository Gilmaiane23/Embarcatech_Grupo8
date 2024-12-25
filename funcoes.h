#ifndef FUNCOES_H
#define FUNCOES_H

// Função para exibir o menu de opções
void menu();

// Funções para conversão de unidades

// 1-Função para conversão de comprimento
void converterComprimento();

// 2-Função para conversão de massa
void converterMassa();

// 3-Função para conversão de volume
void converterVolume();

// Função para obter o fator de conversão para Litros dependendo da unidade escolhida
double obterFatorParaLitros(int unidade);

// Função para exibir a seleção da unidade de conversão (por exemplo, para volume)
int exibirSelecaoUnidade(const char *titulo);

// 4-Função para conversão de comprimento
void converterTemperatura();

// 5-Funções de Conversão de Unidade de Velocidade
float kmh_ms(float v);
float kmh_mph(float v);
float ms_kmh(float v);
float ms_mph(float v);
float mph_kmh(float v);
float mph_ms(float v);
void convertVelocidade();


// 6-Função para conversão de energia
void converterEnergia();

// 7-Funções de tempo (segundo, minuto, hora)
float segundo();
float minuto();
float hora();
void unidade_tempo();

#endif
