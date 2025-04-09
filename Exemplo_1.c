#include <stdio.h>

main(){

    int a, b; // cria duas variaveis, "a" e "b", que o usuario ira definir o valor

    printf("\n Entre com dois numeros : "); // imprime a mensagem no console(tela preta) para o usuario
    scanf("%d %d", &a, &b); // pega os valores que o usuario colocou no console e guarda esse valor nas variaveis "a" e "b"

    int soma = a + b;
    int sub = a - b;
    int multi = a * b;
    int div = a / b; //cria 4 novas variaveis, "soma", "soma", "multi" e "div", e a cada uma é definido o valor respectivo das 4 operações basicas

    printf("\n Os resultados das quatro operacoes basicas desses numeros foram : Soma %d, Sub %d, Multi %d, Div %d", soma, sub, multi, div); // imprime no console os resultados das operações

    if(a = b) { // "if" é o "se", então se o que estiver dentro dos parenteses for verdade o programa vai fazer o que estiver dentro das chaves

        printf("\n OS NUMEROS SAO IGUAIS !!! :)"); // acho que ja deu pra entender o que é o printf ksksks

    } else { // "else" é o "senão", então se o que estiver dentro dos parenteses do "if" não for verdade, o programa vai fazer o que estiver dentro das chaves do "else"

        printf("\n OS NUMEROS NAO SAO IGUAIS !!! :("); // de novo acho que ja tá bom de printf kskksk

    }

return 0; // retorna o valor 0 para a função "main", mas não precisa usar isso
}

 /* usa esse exemplo pra relembrar o basico, não se preucupa
    tanto com o "if" e "else" por enquanto, sugiro anotar e
    tentar fazer um programa desse tmb.

    Agora vê se aprende um pouco, quero que vá bem na prova :) */
