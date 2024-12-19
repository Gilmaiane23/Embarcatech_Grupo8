# Embarcatech_Grupo8
Repositório criado para atividade da unidade 3 do subgrupo 8 - Embarcatech
# Conversão de Unidades de Tempo

Este programa em C permite converter valores entre segundos, minutos e horas. Ele solicita ao usuário uma opção de entrada e realiza os cálculos de conversão com base na unidade escolhida.

## Funcionalidades

- **Opção 1:** Converte segundos para minutos e horas.  
- **Opção 2:** Converte minutos para segundos e horas.  
- **Opção 3:** Converte horas para minutos e segundos.  

## Como Usar

1. Compile o programa utilizando um compilador C, como `gcc`:  
   ```bash
   gcc -o conversao_tempo conversao_tempo.c
   ```
2. Execute o programa:  
   ```bash
   ./conversao_tempo
   ```
3. Escolha uma das opções fornecidas no menu:
   - **1:** Inserir segundos.
   - **2:** Inserir minutos.
   - **3:** Inserir horas.

4. O programa exibirá os valores correspondentes nas outras unidades.

## Exemplo de Uso

### Entrada:
```
Escolha uma opção:
1 Para segundos
2 Para minutos
3 Para horas
1
Digite os segundos: 3600
```

### Saída:
```
Tempo em segundos: 3600
Tempo em minutos: 60
Tempo em horas: 1
```

## Observações

- O programa valida a entrada, exibindo uma mensagem de erro para opções inválidas.  
- As conversões utilizam fatores simples:
  - 1 minuto = 60 segundos.
  - 1 hora = 3600 segundos ou 60 minutos.

