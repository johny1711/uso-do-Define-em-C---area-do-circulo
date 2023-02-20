//Definindo o PI como uma constante em #define PI 3.14159265358979323846 para o calculo da àrea do círculo.


#include <stdio.h>

#define PI 3.14159265358979323846

int main( )
{
	double raio;
	double area = PI * raio * raio;
	
	printf("Digite o valor do raio: ");
	scanf("%lf", &raio); //Na chamada da função scanf, o especificador de formato correto para um número de ponto flutuante é "%lf" já que a variável "radius" é do tipo "double".
	
	area = PI * raio * raio; //repetindo a variável área com fórmula para não dar erro. (Poderia ter declarado essa variável apenas aqui por questões de praticidade e economia de código)

	printf("A área do círculo com um raio de %f é: %.2f", raio, area); //O "%.2f é para limitar em no máximo duas casas decimais após o ponto. ficando uma resposta de, por exemplo: 23.70 ao invés de 23.702345. Outro exemplo: "%.3f" ficando 23.7023 na resposta, etc.

	return 0;
}

		
