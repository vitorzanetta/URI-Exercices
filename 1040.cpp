#include <iostream>
 
using namespace std;
 
int main() {
 
    float n1, n2, n3, n4, exame;
    double media1, media2;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    media1 = ((n1*2) + (n2*3) + (n3*4) + (n4))/10;
    
    printf("Media: %.1lf\n", media1);
    if(media1 >= 7.0){
    	printf("Aluno aprovado.\n");
	}else if(media1 < 5.0){
		printf("Aluno reprovado.\n");
	}else{
		printf("Aluno em exame.\n");
		
		scanf("%f", &exame);
		printf("Nota do exame: %.1f\n", exame);
		media2 = (exame+media1)/2;
		if(media2 >= 5.0){
			printf("Aluno aprovado.\n");
		}else{
			printf("Aluno reprovado.\n");
		}
		
		printf("Media final: %.1lf\n", media2);	
	}
 
    return 0;
}
