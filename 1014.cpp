#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
	int x;
	double y, s;
	
	scanf("%d", &x);
	scanf("%lf", &y);
	
	s = x/y;
	
	printf("%.3lf km/l\n", s);
 
    return 0;
}
