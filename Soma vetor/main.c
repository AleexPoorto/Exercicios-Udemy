#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    double soma, media;
    printf("quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (int i = 0; i < N; i++){
            printf ("digite um numero:\n");
            scanf("%lf", &vet[i]);
    }
    printf("\nVALORES: ", vet);
    for (int i = 0; i < N; i++){
        printf("%.1lf ", vet[i]);
    }
    soma = 0;
    for (int i = 0; i < N; i++){
    soma =  soma + vet[i];
    }
    printf("\nSOMA = %.2lf\n", soma);

    media = soma / N;
    printf("MEDIA = %.2lf", media);
    return 0;
}
