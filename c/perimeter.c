#include <stdio.h>

int main(){
	int x, y;
	printf("Enter the length: ");
	scanf("%i", &x);
	printf("Enter the width: ");
	scanf("%i", &y);
	printf("The area of your rectangle is %i units squared", 2 * ( x + y ) );
	return 0;
}
