#include <stdio.h>
#include <math.h>

main() {

    int a, b; // novamente cria as variaveis que o usuario ir� definir o valor

    printf("\n Entre com dois numeros : ");
    scanf("%d %d", &a, &b); // "printf" e "scanf" acho que j� est� +- explicado

    float potenciacao = pow(a , b);
    float raizQuadrada = sqrt(a);
    float porcentagem = (a / 100) * b;
    float raizQualquerIndice = pow(a, 1 / b); // cria 4 novas variaveis, que operam os valores definidos pelo usuario

    printf("\n Os resultados das operacoes ficaram : Potenciacao %.2f, Raiz-quadrada %.2f, Porcentagem %.2f e Raiz com outro indice %.2f", potenciacao, raizQuadrada, porcentagem, raizQualquerIndice); // resultado das opera��es

return 0;
}

 /* nesse exemplo mostro os comandos da biblioteca "math"
    ,tmb acho bom dar uma olhada sobre bibliotecas
    ,e enquanto fiz esse exemplo lembrei dos tipos de variaveis
    acho bom olhar sobre tambem.

    no mais � isso, mesma coisa do ultimo exemplo
    , anota o que acha importante e n�o lembra,
    tenta fazer algum programa com essas fun��es tmb
    e qualquer duvida pergunta.

    Boa sorte pq vai precisar :) */
