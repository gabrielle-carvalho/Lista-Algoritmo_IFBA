/*3. A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a
cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber
quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de
poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos para o dono. Com
base nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas, e depois calcular
os dados solicitados.*/
#include <stdio.h>

int main(void)
{
    int paes, broas;
    float arrecadado, poupanca, totalPaes, totalBroas;
    printf("Quantos paes foram vendidos? ");
    scanf("%d", &paes);
    
    printf("Quantas broas foram vendidas? ");
    scanf("%d", &broas);
    
    totalPaes=paes*0.12;
    totalBroas=broas*1.50;
    
    arrecadado=totalBroas+totalPaes;
    
    poupanca=arrecadado*0.10;
    
    printf("\nO valor arrecadado é: %.2f ", arrecadado);
    printf("\nO valor a ser guardado na poupança é: %.2f ", poupanca);
    return 0;
}
