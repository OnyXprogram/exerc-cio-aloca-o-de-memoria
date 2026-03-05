#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int size, i;
    
    printf("insira quantos numeros desjea alocar: \n");
    scanf("%d", &size);


    //alocação dinamica na memoria
    array =(int*) malloc(size * sizeof(int));

    if(array == NULL){
        printf("erro na alocacao de memoria.\n");
        return -1; // encerra o programa com erro
    }

    //incerção de numeros no array
    for ( i = 0; i < size; i++)
    {
       printf("digite um numero %d:", i + 1);
       scanf("%d",&array[i]);
    }

    printf("voce inseriu: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    free(array);

    return 0;
    
    
}