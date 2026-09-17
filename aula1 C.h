#include <stdio.h>

int main() {

    printf("C\n");

    printf("é uma linguagem de programação\n");

    printf("muito legal!\n");
    
    return 0;
}

-----

#include <stdio.h>

int main() {

    printf("Produto 1\t=\t25.00\n");
    printf("Produto 2\t=\t47.50\n");
    printf("Produto 3\t=\t68.25\n");
    printf("---------------------------\n");
    printf("Total\t\t=\t140.75");

    return 0;
}

--------

#include <stdio.h>

int main() {

    float n1, n2, soma;

    printf("Digite 2 numeros:\n");

    scanf("%f", &n1);
    scanf("%f", &n2);

    soma = n1+n2;

    printf("Resultado eh: %.2f\n", soma);

    return 0;
}

-----------

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Total_seg, dias, horas, minutos, segundos;

    printf("Dias:\n");
    scanf("%d", &dias);

    printf("Horas:\n");
    scanf("%d", &horas);

    printf("Minutos:\n");
    scanf("%d", &minutos);

    printf("Segundos:\n");
    scanf("%d", &segundos);

    Total_seg = (dias * 24 * 60 * 60) + (horas * 60 * 60) + (minutos * 60) + segundos;

    printf("Tempo em segundos: %d\n", Total_seg);

    return 0;
}


----------

#include <stdio.h>

int main() {
    int a, b, temp;

    // Lê os dois números inteiros da entrada
    scanf("%d", &a);
    scanf("%d", &b);

    // Lógica da troca utilizando uma variável temporária
    temp = a;
    a = b;
    b = temp;

    // Exibe o resultado exatamente no formato esperado: a=X b=Y
    printf("a=%d b=%d\n", a, b);

    return 0;
}

--------------

#include <stdio.h>
#include <stdlib.h>

int main() {
    int km, dias;
    float preco;

    printf("Digite os kms percorridos:\n");
    scanf("%d", &km);

    printf("Digite os dias:\n");
    scanf("%d", &dias);

    preco = 0.15 * km + 60 * dias;

    // O \n no início cria a linha em branco que a plataforma espera
    printf("\nPreco total aluguel: %.2f\n", preco);

    return 0;
}

--------------

#include <stdio.h>
#include <stdlib.h>

int main() {
    float altura, peso;

    printf("Digite a sua altura (m):\n");
    scanf("%f", &altura);

    peso = (72.7 * altura) - 58;

    // O \n no início cria a linha em branco que a plataforma espera
    printf("\nPeso ideal: %.2f kg \n ", peso);

    return 0;
}

