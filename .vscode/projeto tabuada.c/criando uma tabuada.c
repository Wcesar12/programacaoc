#include <stab.h>

int main (){

    int numero, i;

    printf("Digite um numero para calcularmos a tabuada...\n");
    scanf("%d", &numero);


    for(i = 0; i <=10; i++)
{

printf("%d * %d = %d \n", i, numero, i * numero);

}








    return 0;
}