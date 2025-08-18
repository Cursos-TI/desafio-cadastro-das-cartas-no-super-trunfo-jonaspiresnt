#include <stdio.h>

/*
  Regras do programa:
  - Usamos variáveis separadas para cada atributo.
  - Lemos os dados (código, nome, etc..) com scanf.
  - Ao final, mostramos tudo formatado.
*/

int main(void) {
    /* ------------------- Declaração das variáveis da CARTA 1 ------------------- */
    char codigo1[16];          // código da cidade (ex.: "A01", "SP-01")
    char nome1[64];            // nome da cidade (aceita espaços)
    int populacao1;            // população 
    float area1;               // área em km²
    float pib1;                // PIB em milhões
    int pontosTuristicos1;     // quantidade de pontos turísticos

    /* ------------------- Declaração das variáveis da CARTA 2 ------------------- */
    char codigo2[16];
    char nome2[64];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    /* ============================= ENTRADA CARTA 1 ============================= */
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Codigo da cidade (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %s", nome1);

    printf("Populacao (habitantes): ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em milhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /* ============================= ENTRADA CARTA 2 ============================= */
    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Codigo da cidade (ex: A02): ");
    scanf(" %s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %s", nome2);

    printf("Populacao (habitantes): ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em milhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n=========================================\n");
    printf("          CARTAS CADASTRADAS            \n");
    printf("=========================================\n");

    /* Exibe CARTA 1 */
    printf("\n[CARTA 1]\n");
    printf("Codigo:                %s\n", codigo1);
    printf("Nome:                  %s\n", nome1);
    printf("Populacao:             %d habitantes\n", populacao1);
    printf("Area:                  %.2f km2\n", area1);
    printf("PIB:                   %.2f milhoes\n", pib1);
    printf("Pontos turisticos:     %d\n", pontosTuristicos1);

    /* Exibe CARTA 2 */
    printf("\n[CARTA 2]\n");
    printf("Codigo:                %s\n", codigo2);
    printf("Nome:                  %s\n", nome2);
    printf("Populacao:             %d habitantes\n", populacao2);
    printf("Area:                  %.2f km2\n", area2);
    printf("PIB:                   %.2f milhoes\n", pib2);
    printf("Pontos turisticos:     %d\n", pontosTuristicos2);

    printf("\nFim do cadastro.\n");

    return 0;
}
