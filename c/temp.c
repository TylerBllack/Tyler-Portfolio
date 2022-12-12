#include <stdio.h>

int main() {
        float f, c;
        printf("type in a temperature in fahrenheit: ");
        scanf("%f", &f);
	c = (5.0/9.0) * (f - 32);
	printf("Your temperature in celsius is: %f\n", c);
}

