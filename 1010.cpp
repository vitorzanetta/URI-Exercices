#include <iostream>
 
using namespace std;
 
int main() {
 	
 	int codpc1, qtdpc1, codpc2, qtdpc2;
 	double valorpc1, valorpc2, pagar;
 	
 	scanf("%d %d %lf", &codpc1,&qtdpc1,&valorpc1);
 	scanf("%d %d %lf", &codpc2,&qtdpc2,&valorpc2);	
 	
 	pagar = qtdpc1*valorpc1 + qtdpc2*valorpc2;
 	printf("VALOR A PAGAR: R$ %.2lf\n", pagar);
    
    return 0;
}


