#include <stdio.h>
#include <stdlib.h>


int main() { 
float celsius, fahrenheit;

    
    printf("Ingresa la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    
    fahrenheit = (celsius * 9 / 5) + 32;

    
    printf("La temperatura en grados Fahrenheit es: %.2f\n", fahrenheit);


    switch ((int)fahrenheit) {
        case 100 ... 1000:
            printf("El agua está hirviendo.\n");
            break;
        default:
            printf("El agua no esta hirviendo.\n");
    }


	return 0;
}
