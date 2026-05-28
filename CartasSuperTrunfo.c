#include <stdio.h>
int main () {
    
    // =======Carta 1========

        char Estado1;
        char código1[4];
        char Cidade1[50];
        int população1;
        float área1;
        float pib1;
        int pontosTurísticos1;

    // =======Carta 2========

        char Estado2;
        char código2[4];
        char Cidade2[50];
        int população2;
        float área2;
        float pib2;
        int pontosTurísticos2;

    //==========================
    // ===cadastro da carta 1===
    //==========================
    printf("Cadastro da Carta 1\n");

    printf("Escolha uma letra para representar seu Estado de A a H \n");
    scanf("%c", &Estado1);

    printf("Escolha o código da carta (ex: A01) \n");
    scanf("%s", &código1);

    printf("Escolha o nome da sua Cidade \n");
    scanf("%s", &Cidade1);

    printf("Digite o número da população de sua Cidade \n");
    scanf("%d", &população1);

    printf("Delimite a área da sua Cidade \n");
    scanf("%f", &área1);

    printf("Digite o PIB da sua Cidade \n");
    scanf("%f", &pib1);

    printf("Escolha quantos pontos turísticos terão a sua cidade \n");
    scanf("%d", &pontosTurísticos1);

    //=============================
    //==== cadastro da carta 2 ====
    //=============================

    printf("Cadastro da Carta 2\n");

    printf("Escolha uma letra para representar seu Estado de A a H \n");
    scanf(" %c", &Estado2);

    printf("Escolha o código da carta (ex: A01) \n");
    scanf("%s", &código2);  

    printf("Escolha o nome da sua Cidade \n");
    scanf("%s", &Cidade2);

    printf("Digite o número da população de sua Cidade \n");
    scanf("%d", &população2);

    printf("Delimite a área da sua Cidade \n");
    scanf("%f", &área2);

    printf("Digite o PIB da sua Cidade \n");
    scanf("%f", &pib2);

    printf("Escolha quantos pontos turísticos terão a sua cidade \n");
    scanf("%d", &pontosTurísticos2);

    //=============================
    //==== exibição da carta 1 ====
    //=============================

    printf("Carta 1\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", código1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", população1);
    printf("Área: %.2f km²\n", área1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTurísticos1);

    //=============================
    //==== exibição da carta 2 ====
    //=============================

    printf("Carta 2\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", código2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2f km²\n", área2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTurísticos2);








}
