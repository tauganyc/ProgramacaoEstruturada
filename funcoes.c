#include "funcoes.h"
void oi(){
    printf("oi\n");
}
int soma(int a,int b){
    return a+b;
}
int diminui(int a,int b){
    return a-b;
}
int quadrado(int a){
    return a*a;
}
int cubo(int a){
    return quadrado(a)*a;
}
//0 == TRUE, 1 == TRUE
int ehPrimo(int num) {
    int i;
    for (i = 2; i <= num - 1; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int menor(int a, int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
void printPrimos(int inicio, int fim){
    if (menor(inicio,fim)==fim)
    {
        int troca=inicio;
        inicio=fim;
        fim=troca;
    }
    printf("os primos entre %i e %i sao\n",inicio,fim);
    for(int i=inicio; i<=fim; i++){
        if(ehPrimo(i)){
            printf("%i",i);
        }
    }
}
double circunferencia(double raio){
    double a=2*pi*raio;
    return a*raio;
}
double diamentro(double a){
    return
}
double area(double a);