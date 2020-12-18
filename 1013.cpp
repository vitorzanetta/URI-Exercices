#include <iostream>
 
using namespace std;
 
int main() {
 
	int x;
	float y, s;
	
	scanf("%d", &x);
	scanf("%lf", &y);
	
	s = x/y;
	
	printf("%.3lf\n", s);
 
    return 0;
}
