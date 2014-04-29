#include <stdio.h>


typedef struct ficha {
    char nome;
    char endereco;
    int idade;
    float salario;

} Func;

main() {

    Func funcionario;
    printf("Informe o nome de funcionario: \n");
    scanf("%c", &funcionario.nome);

    printf("Informe o endereco: \n");
    scanf("%c", &funcionario.endereco);

    printf("Informe o idade: \n");
    scanf("%d", &funcionario.idade);

    printf("Informe o salario: \n");
    scanf("%f", &funcionario.salario);

    printf("\n O nome e: %c", funcionario.nome);

return 0;
}

