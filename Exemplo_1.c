#include <stdio.h>

main(){

    int a, b; // cria duas variaveis, "a" e "b", que o usuario ira definir o valor

    printf("\n Entre com dois numeros : "); // imprime a mensagem no console(tela preta) para o usuario
    scanf("%d %d", &a, &b); // pega os valores que o usuario colocou no console e guarda esse valor nas variaveis "a" e "b"

    int soma = a + b;
    int sub = a - b;
    int multi = a * b;
    int div = a / b; //cria 4 novas variaveis, "soma", "soma", "multi" e "div", e a cada uma � definido o valor respectivo das 4 opera��es basicas

    printf("\n Os resultados das quatro operacoes basicas desses numeros foram : Soma %d, Sub %d, Multi %d, Div %d", soma, sub, multi, div); // imprime no console os resultados das opera��es

    if(a = b) { // "if" � o "se", ent�o se o que estiver dentro dos parenteses for verdade o programa vai fazer o que estiver dentro das chaves

        printf("\n OS NUMEROS SAO IGUAIS !!! :)"); // acho que ja deu pra entender o que � o printf ksksks

    } else { // "else" � o "sen�o", ent�o se o que estiver dentro dos parenteses do "if" n�o for verdade, o programa vai fazer o que estiver dentro das chaves do "else"

        printf("\n OS NUMEROS NAO SAO IGUAIS !!! :("); // de novo acho que ja t� bom de printf kskksk

    }

return 0; // retorna o valor 0 para a fun��o "main", mas n�o precisa usar isso
}

 /* usa esse exemplo pra relembrar o basico, n�o se preucupa
    tanto com o "if" e "else" por enquanto, sugiro anotar e
    tentar fazer um programa desse tmb.

    Agora v� se aprende um pouco, quero que v� bem na prova :) */
