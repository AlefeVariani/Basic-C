#include <stdio.h>

// Alefe Variani, William klassmann

typedef struct bandas {
    char nome[30];
    char tipo_musica[30];
    int num_integrantes;
    int ranking;

} Func;

main() {

    Func bandas[5];
    int i;

    for (i = 1; i <= 5; i++) {
        printf("\nInforme o nome da banda: \n");
        scanf("%s", &bandas[i].nome);

        printf("\nInforme o tipo de musica: \n");
        scanf("%s", &bandas[i].tipo_musica);

        printf("\nInforme o numeros de integrantes: \n");
        scanf("%d", &bandas[i].num_integrantes);

        printf("\nInforme o Ranking: \n");
        scanf("%d", &bandas[i].ranking);

        printf("************");

        i++;
    }

    for (i = 1; i <= 5; i++) {
        printf("\n===========================================\n");
        printf("\n O nome da banda : %s", bandas[i].nome);
        printf("\n O tipo de musica : %s", bandas[i].tipo_musica);
        printf("\n O numeros de itegrantes : %d", bandas[i].num_integrantes);
        printf("\n O Ranking : %d", bandas[i].ranking);
        printf("\n=========================================== \n");
    }

return 0;
}
