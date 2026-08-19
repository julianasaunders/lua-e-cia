#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char pets[5][5][50];

    int i;
    char opcao;

    for(i = 0; i < 5; i++)
    {
        printf("\n===== Cadastro do Pet %d =====\n", i + 1);

        printf("Nome do pet: ");
        scanf(" %[^\n]", pets[i][0]);

        printf("Idade do pet: ");
        scanf(" %[^\n]", pets[i][1]);

        printf("Sexo do pet (M/F): ");
        scanf(" %[^\n]", pets[i][2]);

        printf("Resultado FIV (Positivo/Negativo): ");
        scanf(" %[^\n]", pets[i][3]);

        printf("Resultado FELV (Positivo/Negativo): ");
        scanf(" %[^\n]", pets[i][4]);

        printf("\nDeseja cadastrar outro pet? (s/n): ");
        scanf(" %c", &opcao);

        if(opcao == 'n' || opcao == 'N')
        {
            break;
        }
    }

    printf("\n\n===== PETS CADASTRADOS =====\n");

    for(int j = 0; j <= i; j++)
    {
        printf("\nPet %d\n", j + 1);
        printf("Nome: %s\n", pets[j][0]);
        printf("Idade: %s\n", pets[j][1]);
        printf("Sexo: %s\n", pets[j][2]);
        printf("FIV: %s\n", pets[j][3]);
        printf("FELV: %s\n", pets[j][4]);
    }

    return 0;
}
