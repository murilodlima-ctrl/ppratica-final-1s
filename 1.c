
/*Quando uma variável local é declarada e não é inicializada, ela contém um valor indefinido
Utilizar esse valor pode gerar comportamentos inesperados e erros difíceis de identificar.*/

//Exemplo onde é necessário inicializar:
	
#include <stdio.h>

int main() {
    int n = 0;

    n++;
    printf("%d\n", n);

    return 0;
}

//Exemplo onde não é necessário inicializar:
	
#include <stdio.h>
int n;

scanf("%d", &n);

printf("%d", n);

