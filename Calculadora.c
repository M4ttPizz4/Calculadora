//Calculadora:
//Imports:
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//Int main:
int main(void){
//Local:
setlocale(LC_ALL,"Portuguese");
//Vari�veis:
int operacao_menu, operacao_fg, somar_1, somar_2, somar_r, subtrair_1, subtrair_2, subtrair_r, multiplicar_1, multiplicar_2, multiplicar_r, dividir_1, dividir_2, dividir_r, raiz_1, raiz_r, potencia_1, potencia_2, potencia_r, bhaskara_a, bhaskara_b, bhaskara_c, bhaskara_delta, bhaskara_r1, bhaskara_r2, quadrado_1, quadrado_2, quadrado_r, triangulo_base, triangulo_altura, triangulo_r; 
float porcen_1, porcen_2, porcen_r, circulo_1, circulo_r;
//Intera��o:
printf("\n[Calculadora (Beta 2)]\n\n");
printf("Selecione a opera��o teclando o n�mero correspondente:\n\n1.Somar.\n2.Subtrair.\n3.Multiplicar.\n4.Dividir.\n5.Raiz Quadrada.\n6.Pot�ncia.\n7.Formula de Bh�skara.\n8.Porcentagem.\n9.Figuras geom�tricas.\n\n");
scanf("%i", &operacao_menu);
printf("\n------------------------------------------------------------------------\n\n");
	//Somar:
	if(operacao_menu == 1){
		printf("Para come�ar a soma, digite o primeiro n�mero e em seguida aperte 'Enter':\n\n");
		scanf("%i", &somar_1);
		printf("\nDigite o segundo n�mero:\n\n");
		scanf("%i", &somar_2);
		printf("\n------------------------------------------------------------------------\n\n");
			somar_r = somar_1 + somar_2;	//C�lculo
		printf("\nO resultado da soma � : %i \n", somar_r);
	}
	//Subtrair:
	if(operacao_menu == 2){
		printf("Para come�ar a subtra��o, digite o primeiro n�mero e em seguida aperte 'Enter':\n\n");
		scanf("%i", &subtrair_1);
		printf("\nDigite o segundo n�mero:\n\n");
		scanf("%i", &subtrair_2);
		printf("\n------------------------------------------------------------------------\n\n");
			subtrair_r = subtrair_1 - subtrair_2;	//C�lculo
		printf("\nO resultado da subtra��o � : %i \n", subtrair_r);
	}
	//Multiplica��o:
	if(operacao_menu == 3){
		printf("Para come�ar a multiplica��o, digite o primeiro n�mero e em seguida aperte 'Enter':\n\n");
		scanf("%i", &multiplicar_1);
		printf("\nDigite o segundo n�mero:\n\n");
		scanf("%i", &multiplicar_2);
		printf("\n------------------------------------------------------------------------\n\n");
			multiplicar_r = multiplicar_1 * multiplicar_2;	//C�lculo
		printf("\nO resultado da multiplica��o � : %i \n", multiplicar_r);
	}
	//Divis�o:
	if(operacao_menu == 4){
		printf("Para come�ar a divis�o, digite o primeiro n�mero e em seguida aperte 'Enter':\n\n");
		scanf("%i", &dividir_1);
		printf("\nDigite o segundo n�mero:\n\n");
		scanf("%i", &dividir_2);
		printf("\n------------------------------------------------------------------------\n\n");
			dividir_r = dividir_1 / dividir_2;	//C�lculo
		printf("\nO resultado da divis�o � : %i \n", dividir_r);
	}
	//Raiz Quadrada:
	if(operacao_menu == 5){
		printf("Para calcular a raiz, digite o n�mero que desejar e aperte 'Enter':\n\n");
		scanf("%i", &raiz_1);
		printf("\n------------------------------------------------------------------------\n\n");
			raiz_r = sqrt(raiz_1);	//C�lculo
		printf("\nO resultado da raiz quadrada � : %i \n", raiz_r);
	}
	//Pot�ncia:
	if(operacao_menu == 6){
		printf("Para calcular a pot�ncia, digite o n�mero que desejar e aperte 'Enter':\n\n");
		scanf("%i", &potencia_1);
		printf("Digite o expoente do seu n�mero:\n\n");
		scanf("%i", &potencia_2);
		printf("\n------------------------------------------------------------------------\n\n");
			potencia_r = pow(potencia_1, potencia_2);
		printf("O resultado da potencia��o � : %i \n", potencia_r);
	}
	//Bh�skara:
	if(operacao_menu == 7){
		printf("Para fazer o c�lculo da f�rmula de bhaskara digite o n�mero correspondente a 'A' e aperte 'Enter':\n\n");
		scanf("%d", &bhaskara_a);
		printf("\nDigite o valor de 'B':\n\n");
		scanf("%d", &bhaskara_b);
		printf("\nDigite o valor de 'C':\n\n");
		scanf("%d", &bhaskara_c);
			bhaskara_delta = pow(bhaskara_b, 2) - 4*bhaskara_a*bhaskara_c;	//C�lculo de delta
			bhaskara_r1 = -bhaskara_b+sqrt(bhaskara_delta)/(2*bhaskara_a);	//C�lculo de X1
			bhaskara_r2 = -bhaskara_b-sqrt(bhaskara_delta)/(2*bhaskara_a);	//C�lculo de X2
		printf("\n------------------------------------------------------------------------\n\n");
		printf("\nUtilizando raiz de delta positivo em X1 e raiz de delta negativo em X2, podemos adquirir o seguinte resultado:\n\n");
		printf("X1 = %d \nX2 = %d \n", bhaskara_r1, bhaskara_r2);
	}
	//Porcentagem:
	if(operacao_menu == 8){
		printf("\nPara calcular a porcentagem, digite o valor que deseja ser o porcento 'Enter':\n\n");
		scanf("%f", &porcen_1);
		printf("\nDigite o valor de onde o porcento ir� retirar o resultado:\n\n");
		scanf("%f", &porcen_2);
			porcen_r = porcen_2*(porcen_1/100);		//C�lculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("\nO resultado desse c�lculo �: %f \n", porcen_r);
	}
	//�reas de figuras geom�tricas:
	if(operacao_menu == 9){
		printf("\nSelecione a figura geom�trica que desejar para calcular sua �rea:\n\n1.Quadrado ou ret�ngulo.\n2.C�rculo.\n3.Tri�ngulo.\n\n");
		scanf("%i", &operacao_fg);
	}
		//Quadrado/Ret�ngulo:
	if(operacao_fg == 1){
		printf("\nPara continuar a opera��o, informe o valor do lado de cima ou de baixo do quadrado/ret�ngulo: _\n\n");
		scanf("%i", &quadrado_1);
		printf("\nInsira o valor do lado esquerdo ou direito do quadrado/ret�ngulo: |\n\n");
		scanf("%i", &quadrado_2);
			quadrado_r = quadrado_1 * quadrado_2;	//C�lculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("\nO valor da �rea do quadrado/ret�ngulo �: %i \n", quadrado_r);
	}
		//C�rculo:
		if(operacao_fg == 2){
		printf("\nPara calcular a �rea do c�rculo, insira o valor do raio:\n\n");
		scanf("%f", &circulo_1);
			circulo_r = 3.14 * pow(circulo_1, 2);	//C�lculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("\nO valor da �rea do c�rculo � : %f \n", circulo_r);
	}
		//Tri�ngulo:
		if(operacao_fg == 3){
		printf("\nPara calcular a �rea do tri�ngulo, insira o valor da base:\n\n");
		scanf("%i", &triangulo_base);
		printf("\nInsira o valor da altura:\n\n");
		scanf("%i", &triangulo_altura);
			triangulo_r = (triangulo_base*triangulo_altura)/2;	//C�lculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("\nO valor da �rea do tri�ngulo � : %i \n", triangulo_r);
		}
//Finaliza��es:
printf("\n\n|***Obrigada pela visita e feche a aplica��o.<3***|\n\n");
system("Pause");
return 0;
}
//Fim do c�digo.
