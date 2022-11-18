#include <stdio.h>

int main(){
	int x, y;
	printf("Enter the length: ");
	scanf("%i", &x);
	
	if ( x <= 0 )
	{ 
    		printf("Length cannot be negative!\n");
		return 0;
	} 

	printf("Enter the width: ");
	scanf("%i", &y);

	if( y <= 0 )
	{
		printf("Width cannot be negative!\n");
		return 0;
	}

	printf("The area of your rectangle is %i units squared", x * y);
	return 0;
}
