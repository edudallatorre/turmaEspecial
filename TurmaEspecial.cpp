#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main(){
	
	FILE * fp;
	int user, media;
	float valor, entrada, n1, n2, soma;
	int parcela, numParcelas;
	
	do{
		
	printf("                                              Developer: Eduardo D.Torre");
	system("Color F1");
	printf("\n\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
	printf("\n\t\xBA MENU OPCOES:          \xBA");
	printf("\n\t\xBA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBA");
	printf("\n\t\xBA 1.Somar               \xBA");
	printf("\n\t\xBA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBA");
	printf("\n\t\xBA 2.Turma Especial      \xBA");
	printf("\n\t\xBA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBA");
	printf("\n\t\xBA 3.Dividir             \xBA");
	printf("\n\t\xBA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBA");
	printf("\n\t\xBA 4.Multiplicar         \xBA");
	printf("\n\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
	printf("\n\tDigite o Numero: ");
	
	scanf("%d", &user);
	system("cls");
	switch(user)
	{
		case 1:
		system("color 1F");
		printf("\n\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
		printf("\n\t\xBA    SOMAR     \xBA");
		printf("\n\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");	
	
		int i, n;
		printf("\nQuantos Calculos: ");
    	scanf("%d", &n);
    	soma = 0;
    	i = 0;
    	while (i < n)
    	{	
    	printf("\n(%d)", i+1);
    	printf("\n\tValor: ");
    	scanf("%f", &valor);
        i = i + 1;
        soma = soma + valor;
        printf("---------------------");
    	}
		printf("\n\tResultado => %.2f\n", soma);
		
		fp = fopen ("Soma.txt", "w+");
		fprintf (fp, "\n===============================================");
 		fprintf (fp, "\n\n                VALOR CALCULADO\n\n");
		fprintf (fp, "===============================================\n");
		fprintf(fp, "\n\tResultado => %.2f\n", soma);
   
  		fclose(fp);

		system("start Soma.txt");
		system("pause");
		system("cls");
		break;
		case 2:
		system("color 1F");
		printf("\n\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
		printf("\n\t\xBA   CALCULO DA TURMA ESPECIAL  \xBA");
		printf("\n\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
	
		printf("\n \tValor da Turma Especial: ");
		scanf("%f", &valor);
	
		printf("\n \tNumero de parcelas: ");
		scanf("%d", &numParcelas);
		system("cls");
		
		printf("Valor Total da divida => %.2f", valor);
	
		parcela = valor / numParcelas;//dividi as parcelas
		numParcelas = numParcelas - 1;//tira a entrada
		entrada = valor - (numParcelas * parcela);//quando ele faz o primeiro calculo ele deixa um numeros inteiros por ser %d e o valor total que e %f fica com os valores quebrados.
	
		printf ("\n===============================================================================");
 		printf ("\n\n                         VALOR CALCULADO\n\n");
		printf ("===============================================================================\n");
	
		printf("\n \t1 Entrada => %.2f\n", entrada);
		printf("\n \t%d parcelas de => %d\n", numParcelas, parcela);
	
		fp = fopen ("TurmaEspecial.txt", "w+");
		fprintf(fp, "\n\tValor Total da divida => %.2f", valor);
		fprintf (fp, "\n===============================================");
 		fprintf (fp, "\n\n                VALOR CALCULADO\n\n");
		fprintf (fp, "===============================================\n");
		fprintf(fp, "\n \t1 Entrada => %.2f\n \n \t%d parcelas de => %d\n", entrada, numParcelas, parcela);
   
  		fclose(fp);

		system("start TurmaEspecial.txt");
		system("pause");
		system("cls");
		break;
		case 3:
		system("color 1F");
		printf("\n\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
		printf("\n\t\xBA    DIVIDIR   \xBA");
		printf("\n\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		printf("\n\tDividendo: ");
		scanf("%f", &n1);
		printf("\n\tDivisor: ");
		scanf("%f", &n2);
		soma = n1 / n2;
		printf("\n\tResultado => %.2f\n", soma);
		system("pause");
		system("cls");
		break;
		case 4:
		system("color 1F");
		printf("\n\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
		printf("\n\t\xBA MULTIPLICAR  \xBA");
		printf("\n\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		printf("\n\tNumero 1: ");
		scanf("%f", &n1);
		printf("\n\tNumero 2: ");
		scanf("%f", &n2);
		soma = n1 * n2;
		printf("\n\tResultado => %.2f\n", soma);
		system("pause");
		system("cls");
		break;
		default:
			printf("Codigo invalido");
		}
	
	}while(user);

}

