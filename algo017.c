/*17. Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça um
algoritmo para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este
tipo de conversão).*/
#include<stdio.h>
int main(void){
    float temperatura;
    printf("Qual é a temperatura (Em celsius)?");
    scanf("%f", &temperatura);
    temperatura=(temperatura*1.8)+32;
    
    printf("A temperatura em Fahrenheit = %.2f ", temperatura);
}
