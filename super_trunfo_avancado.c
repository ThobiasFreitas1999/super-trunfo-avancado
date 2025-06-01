#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao = 0;

    const char *pais1 = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 1847000.0;
    int pontosTuristicos1 = 9;
    float densidade1 = populacao1 / area1;

    const char *pais2 = "Japao";
    int populacao2 = 125800000;
    float area2 = 377975.0;
    float pib2 = 4937000.0;
    int pontosTuristicos2 = 12;
    float densidade2 = populacao2 / area2;

    while (opcao != 7)
    {
        printf("\n=== SUPER TRUNFO - Comparacao de Cartas ===\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n");
        printf("6 - Comparar 2 atributos\n");
        printf("7 - Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nPopulacao do %s: %d\n", pais1, populacao1);
            printf("Populacao do %s: %d\n", pais2, populacao2);
            (populacao1 > populacao2) ? printf(">> %s venceu!\n", pais1) : (populacao2 > populacao1) ? printf(">> %s venceu!\n", pais2)
                                                                                                     : printf(">> Empate!\n");
            break;

        case 2:
            printf("\nArea do %s: %.2f km2\n", pais1, area1);
            printf("Area do %s: %.2f km2\n", pais2, area2);
            (area1 > area2) ? printf(">> %s venceu!\n", pais1) : (area2 > area1) ? printf(">> %s venceu!\n", pais2)
                                                                                 : printf(">> Empate!\n");
            break;

        case 3:
            printf("\nPIB do %s: R$ %.2f milhoes\n", pais1, pib1);
            printf("PIB do %s: R$ %.2f milhoes\n", pais2, pib2);
            (pib1 > pib2) ? printf(">> %s venceu!\n", pais1) : (pib2 > pib1) ? printf(">> %s venceu!\n", pais2)
                                                                             : printf(">> Empate!\n");
            break;

        case 4:
            printf("\nPontos Turisticos do %s: %d\n", pais1, pontosTuristicos1);
            printf("Pontos Turisticos do %s: %d\n", pais2, pontosTuristicos2);
            (pontosTuristicos1 > pontosTuristicos2) ? printf(">> %s venceu!\n", pais1) : (pontosTuristicos2 > pontosTuristicos1) ? printf(">> %s venceu!\n", pais2)
                                                                                                                                 : printf(">> Empate!\n");
            break;

        case 5:
            printf("\nDensidade do %s: %.2f hab/km2\n", pais1, densidade1);
            printf("Densidade do %s: %.2f hab/km2\n", pais2, densidade2);
            (densidade1 < densidade2) ? printf(">> %s venceu!\n", pais1) : (densidade2 < densidade1) ? printf(">> %s venceu!\n", pais2)
                                                                                                     : printf(">> Empate!\n");
            break;

        case 6:
        {
            int atributo1, atributo2;
            int pontos1 = 0, pontos2 = 0;

            printf("\nEscolha dois atributos para comparar (1 a 5):\n");
            printf("1-Populacao 2-Area 3-PIB 4-Pontos Turisticos 5-Densidade\n");
            printf("Primeiro atributo: ");
            scanf("%d", &atributo1);
            printf("Segundo atributo: ");
            scanf("%d", &atributo2);

            // Comparar primeiro atributo
            switch (atributo1)
            {
            case 1:
                (populacao1 > populacao2) ? pontos1++ : (populacao2 > populacao1) ? pontos2++
                                                                                  : 0;
                break;
            case 2:
                (area1 > area2) ? pontos1++ : (area2 > area1) ? pontos2++
                                                              : 0;
                break;
            case 3:
                (pib1 > pib2) ? pontos1++ : (pib2 > pib1) ? pontos2++
                                                          : 0;
                break;
            case 4:
                (pontosTuristicos1 > pontosTuristicos2) ? pontos1++ : (pontosTuristicos2 > pontosTuristicos1) ? pontos2++
                                                                                                              : 0;
                break;
            case 5:
                (densidade1 < densidade2) ? pontos1++ : (densidade2 < densidade1) ? pontos2++
                                                                                  : 0;
                break;
            }

            // Comparar segundo atributo
            switch (atributo2)
            {
            case 1:
                (populacao1 > populacao2) ? pontos1++ : (populacao2 > populacao1) ? pontos2++
                                                                                  : 0;
                break;
            case 2:
                (area1 > area2) ? pontos1++ : (area2 > area1) ? pontos2++
                                                              : 0;
                break;
            case 3:
                (pib1 > pib2) ? pontos1++ : (pib2 > pib1) ? pontos2++
                                                          : 0;
                break;
            case 4:
                (pontosTuristicos1 > pontosTuristicos2) ? pontos1++ : (pontosTuristicos2 > pontosTuristicos1) ? pontos2++
                                                                                                              : 0;
                break;
            case 5:
                (densidade1 < densidade2) ? pontos1++ : (densidade2 < densidade1) ? pontos2++
                                                                                  : 0;
                break;
            }

            printf("\nResultado: %s %d x %d %s\n", pais1, pontos1, pontos2, pais2);
            (pontos1 > pontos2) ? printf(">> %s venceu!\n", pais1) : (pontos2 > pontos1) ? printf(">> %s venceu!\n", pais2)
                                                                                         : printf(">> Empate!\n");
            break;
        }

        case 7:
            printf("\nEncerrando o programa. Obrigado por jogar!\n");
            break;

        default:
            printf("\nOpcao invalida. Tente novamente.\n");
            break;
        }
    }

    return 0;
}
