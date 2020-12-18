#include <stdio.h>
#include <math.h> 
int main() {
 
  	float a, b, c, x, R1, R2;
  	
  	scanf("%f %f %f", &a, &b, &c);
  	
  	x = (b*b) - (4*a*c);
  	
  	if(x<0)printf("Impossivel calcular\n");
  	else if(a == 0)printf("Impossivel calcular\n");
	else{
  		R1 = (-b + sqrt(x))/(a+a);
  		R2 = (-b - sqrt(x))/(a+a);
  		printf("R1 = %.5f\n", R1);
  		printf("R2 = %.5f\n", R2);
  	}
    return 0;
    
}

