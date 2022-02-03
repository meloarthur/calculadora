#include <stdio.h>
#include <math.h>
int *func_cubo(int v[10]);
int func_quad(int v[10]);
int func_inversa(int v[10]);
int func_separa(int v[10]);
float func_media(int v[10]);
int main (){

int v[10], *cubo, quad, inversa, separa;
float media;

    for (int i = 0; i < 10; i++){
        printf("Digite números inteiros positivos [%d de 10]: ", i+1);
        scanf("%d", &v[i]);

        if (v[i] < 0)
            return 0;
    }

    separa = func_separa(v);
    inversa = func_inversa(v);
    media = func_media(v);

    printf("\nA média dos valores do vetor é: %.2f\n", media);

    cubo = func_cubo(v);

    printf("O cubo do valor do menor elemento do vetor é: %d\n", *cubo);

    quad = func_quad(v);

    printf("O quadrado do maior elemento do vetor é: %d\n", quad);

}

int *func_cubo(int v[10]){

int menor = v[0], cubo;
int *pcubo = &cubo;

    for (int i = 0; i < 10; i++){
        if (v[i] < menor){
            menor = v[i];
            
        }
    }
    cubo = pow(menor,3);

    return *pcubo;

}

int func_quad(int v[10]){

int maior = v[0], quad;

    for (int i = 0; i < 10; i++){
        if (v[i] > maior){
            maior = v[i];
            quad = pow(maior,2);
        }
    }

    return quad;

}

int func_inversa(int v[10]){

    printf("\nImpressão do vetor na ordem inversa: ");

    for (int i = 9; i >= 0; i--){
        printf("%d ", v[i]);
    }

}

int func_separa(int v[10]){

int par[10], impar[10];

    printf("Os valores pares do vetor são: ");

    for (int i = 0; i < 10; i++){
        if (v[i] % 2 ==0){
            par[i] = v[i];
            printf("%d ", par[i]);
        }
    }

    printf("\nOs valores ímpares do vetor são: ");

    for (int i = 0; i < 10; i++){
        if (v[i] % 2 != 0){
            impar[i] = v[i];
            printf("%d ", impar[i]);
        }
    }

}

float func_media(int v[10]){

float soma = 0;
float media;

    for (int i = 0; i < 10; i++)
        soma += v[i];

    media = soma / 10;

    return media;

}