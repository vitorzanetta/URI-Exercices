#include <iostream>
 
using namespace std;
 
int main() {
 
    int age, y, m, d;
    
    scanf("%d", &age);
    
    y = age/365;
    age = age % 365;
    m = age / 30;
    d = age % 30;
 	
 	printf("%d ano(s)\n", y);
 	printf("%d mes(es)\n", m);
 	printf("%d dia(s)\n", d);
 	
    return 0;
}
