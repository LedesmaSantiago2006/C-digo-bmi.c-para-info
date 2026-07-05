#include <stdio.h>
int main(void) {
	float altura;
	float peso;
              float BMI;

printf("Ingrese aqui su altura\n");
scanf("%f", &altura);
 
printf("ingrese su peso aqui\n"); 
scanf("%f", &peso);

BMI = peso / (altura*altura);

printf("Tu índice de masa corporal es de: %2.f \n", BMI);
printf("puede comparar su resultado con el siguiente cuadro\n\n" );
printf(
		   "Indice       | Condicion\n"
		   "-------------------------\n"
		   "<18.5        | Bajo peso\n"
		   "18.5 a 24.9  | Normal\n"
		   "25.0 a 29.9  | Sobrepeso\n"
		   ">=30         | Obesidad\n"
		   );

    printf("\nSu condicion es: ");
    if (BMI < 18.5) {
        printf("Bajo peso\n");
    } else if (BMI >= 18.5 && BMI <= 24.9) {
        printf("Normal\n");
    } else if (BMI >= 25.0 && BMI <= 29.9) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidad\n");
    }
    
    return 0;
}
