#include <stdio.h>
#include <stdlib.h>



int main() {
	
    float nota1, nota2, nota3, nota4, nota5;
    float promedio;

    printf("Ingresa la nota de la materia 1: ");
    scanf("%f", &nota1);

    printf("Ingresa la nota de la materia 2: ");
    scanf("%f", &nota2);

    printf("Ingresa la nota de la materia 3: ");
    scanf("%f", &nota3);

    printf("Ingresa la nota de la materia 4: ");
    scanf("%f", &nota4);

    printf("Ingresa la nota de la materia 5: ");
    scanf("%f", &nota5);

    promedio = (nota1 + nota2 + nota3 + nota4 + nota5) / 5.0;

    switch ((int)promedio) {
        case 70 ... 100:
            printf("¡El estudiante paso! El promedio es %.2f\n", promedio);
            break;
        default: 
            printf("Estudiante raspado. El promedio es %.2f\n", promedio);
	
}
	
	return 0;
}
