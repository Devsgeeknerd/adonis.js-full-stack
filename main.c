// Inclui a biblioteca padrão de entrada e saída.
#include <stdio.h>
// Inclui a biblioteca padrão para funções utilitárias.
#include <stdlib.h>

// Função principal do programa.
void main()
{
    // Declara uma variável inteira para armazenar o primeiro número.
    int x;
    // Declara uma variável inteira para armazenar o segundo número.
    int y;

    // Solicita ao usuário que digite o primeiro número.
    printf("Digite o primeiro numero: ");
    // Lê o primeiro número e armazena na variável 'x'.
    scanf("%d", &x);

    // Solicita ao usuário que digite o segundo número.
    printf("Digite o segundo numero: ");
    // Lê o segundo número e armazena na variável 'y'.
    scanf("%d", &y);

    // Compara os dois números para determinar qual é o menor.
    if (x <= y)
    {
        // Se 'x' for menor ou igual a 'y', exibe 'x' como o menor valor.
        printf("O menor valor e o: %d", x);
    }
    else if (x == y)
    {
        // Se 'x' for igual a 'y', informa que os valores são iguais.
        printf("Os valores são iguais");
    }
    else
    {
        // Caso contrário, exibe 'y' como o menor valor.
        printf("O menor e o: %d", y);
    }
    // Retorna "0" para indicar que o programa terminou com sucesso.
    return 0;
}
