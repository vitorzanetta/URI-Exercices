#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
 	
 	int tempo, velocidade;
 	float litros;
 	
 	scanf("%d", &tempo);
 	scanf("%d", &velocidade);
	 
	litros = (tempo*velocidade)/12.0;
	
	printf("%.3f\n", litros); 
 
    return 0;
}
