#include <stdio.h>
#include <stdlib.h>
#include <math.h> // importa as bibliotecas necessarias

main()
{
    int menu() {

    int opcao;

    printf("\n --- Escolha uma das opcoes ---");
    printf("\n --- 1. Soma  ---");
    printf("\n --- 2. Subtracao  ---");
    printf("\n --- 3. Multiplicacao  ---");
    printf("\n --- 4. Divisao  ---");
    printf("\n --- 5. Porcentagem  ---");
    printf("\n --- 6. Potenciacao  ---");
    printf("\n --- 7. Radiciacao  ---");
    printf("\n --- 8. Sair  ---");
    printf("\n");
    printf("\n Qual opcao deseja : ");

    scanf("%d", &opcao);
    return opcao;
    } // cria uma função que retorna a opção escolhida pelo usuario (imput)

    int escolha; // cria uma variavel para armazenar a função menu

    while (escolha != 8) {

        escolha = menu(); // armazena o retorno da função menu

        switch (escolha) {
            case 1: {
                float n1, n2, r; // define as variaveis necessarias

                printf("\n Digite os dois numeros que deseja somar, separados por , Ex:(1, 2) :");
                scanf("%f, %f", &n1, &n2); // define os valores das variaveis como o imput do usuario

                r = n1 + n2; // opera os calculos

                printf("\n O resultado da sua soma ficou : %.2f", r);
                printf("\n"); // exibe o resultado
            }
            break;
            case 2: {
                float n1, n2, r; // define as variaveis necessarias

                printf("\n Digite os dois numeros que deseja subtrair, separados por , Ex:(1, 2) :");
                scanf("%f, %f", &n1, &n2); // define os valores das variaveis como o imput do usuario

                r = n1 - n2; // opera os calculos

                printf("\n O resultado da sua subtracao ficou : %.2f", r);
                printf("\n"); // exibe o resultado
            }
            break;
            case 3: {
                float n1, n2, r; // define as variaveis necessarias

                printf("\n Digite dois numeros que deseja multiplicar, separados por , Ex:(1, 2) : ");
                scanf("%f, %f", &n1, &n2); // define os valores das variaveis como o imput do usuario

                r = n1 * n2; // opera os calculos

                printf("\n O resultado da sua multiplicacao ficou : %.2f", r);
                printf("\n"); // exibe o resultado
            }
            break;
            case 4: {
                float n1, n2, r; // define as variaveis necessarias

                printf("\n Digite os dois numeros que deseja dividir, separados por , Ex:(1, 2) :");
                scanf("%f, %f", &n1, &n2); // define os valores das variaveis como o imput do usuario

                r = n1 / n2; // opera os calculos

                printf("\n O resultado da sua divisao ficou : %.2f", r);
                printf("\n"); // exibe o resultado
            }
            break;
        } // analisa o valor da variavel opção, se for igual a algum caso (case) opera o mesmo

        printf("\n ---Pressione ENTER para retornar ao menu---");
        getchar();
        getchar(); // apenas enfeite, recebe a tecla apertada pelo usuario

        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif // _WIN32  // usado para limpar o console
    } // repete de acordo com a condição imposta

return 0;
}
