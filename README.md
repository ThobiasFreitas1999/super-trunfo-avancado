Super Trunfo Avançado (Faculdade)  
Este projeto foi desenvolvido em linguagem C como parte de um desafio da faculdade. O objetivo é simular a comparação de cartas do jogo Super Trunfo usando dados de dois países.

O que o programa faz  
- Exibe um menu interativo para escolher atributos:
  - População
  - Área (em km²)
  - PIB (em milhões)
  - Pontos turísticos
  - Densidade demográfica
  - Comparar 2 atributos simultaneamente  
- Compara os valores de cada país e informa quem venceu  
- Calcula a densidade populacional automaticamente  
- Permite comparações simples e duplas usando operador ternário

Como rodar o programa no Windows  
Você precisa ter o GCC instalado em!!

Depois, siga os passos:

1. Abra o terminal (PowerShell ou CMD)
2. Vá até a pasta onde está o arquivo `.c`. Exemplo:

    cd C:\Users\SeuPC\Desktop\super-trunfo-avancado

3. Compile o código com o comando:

    gcc super_trunfo_avancado.c -o super_trunfo

4. Execute o programa com:

    .\super_trunfo

Pronto! O programa vai rodar e exibir o menu de comparação de cartas.

Exemplo de uso

=== SUPER TRUNFO - Comparacao de Cartas ===  
1 - Populacao  
2 - Area  
3 - PIB  
4 - Pontos Turisticos  
5 - Densidade Demografica  
6 - Comparar 2 atributos  
7 - Sair  

Digite sua opcao: 6

Escolha dois atributos para comparar (1 a 5):  
1-Populacao 2-Area 3-PIB 4-Pontos Turisticos 5-Densidade  
Primeiro atributo: 5  
Segundo atributo: 1  

Resultado: Brasil 2 x 0 Japao  
>> Brasil venceu!

Esse projeto ajuda a praticar estruturas de decisão (`if`, `else if`, `switch` e operador ternário), organização de menu, entrada de dados e lógica de comparação em C.
