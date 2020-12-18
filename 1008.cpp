#include <iostream>
 
using namespace std;
 
int main() {
 
    int numero, ht;
    double valor, salario;
    
    scanf("%d", &numero);
	scanf("%d", &ht);
	scanf("%.2lf", &valor);    
	
	
	salario = ht * valor;
	
	printf("NUMBER = %d\n", numero);
	
	printf("SALARY = U$%.2lf\n", salario);
	
	return 0;
}

