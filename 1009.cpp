#include <iostream>
 
using namespace std;
 
int main() {
 	
 	char nome[30];
 	double salario, vendas, total;
 	
 	gets(nome);
 	scanf("%lf", &salario);
 	scanf("%lf", &vendas);
 	
    total = salario + (vendas * 0.15);
    
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}


