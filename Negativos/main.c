#include <stdio.h>
#include <stdlib.h>

int main(){
system("color 0A");
int N;

printf("quantos numeros serao digitados? ");
scanf("%d", &N);

int vet[N];

for (int i = 0; i < N; i++)
{
    printf("Digite um numero: \n");;
    scanf("%d", &vet[i]);
}
    printf("\nNUMEROS NEGATIVOS:\n");

    for (int i = 0; i < N; i++)
        if(vet[i] < 0){
            printf("%d\n", vet[i]);
        }

return 0;
}
