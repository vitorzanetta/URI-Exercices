#include <iostream>
 
using namespace std;
 
int main() {
 
    int A, B, C;
    
    scanf("%d %d %d", &A, &B, &C);
    
	if(A < B && A < C && B < C){
		printf("%d\n", A);
    	printf("%d\n", B);
    	printf("%d\n", C);
	}
	if(B < A && B < C && A < C){
		printf("%d\n", B);
    	printf("%d\n", A);
    	printf("%d\n", C);
	}
	if(C < A && C < B && A < B){
		printf("%d\n", C);
    	printf("%d\n", A);
    	printf("%d\n\n", B);
	}
	
	printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    
 	
    return 0;
}
