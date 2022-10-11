/*Construa um programa em C/C++ que tenha as seguintes op��es de Menu:
1.1 - Leia um vetor de 10 posi��es com valores aleat�rios 0-100 e na
sequ�ncia selecione aleatoriamente tr�s posi��es/�ndices deste vetor e
apresente os seus valores e a multiplica��o destes.
1.2 - Leia dois vetores de 5 posi��es com valores inteiros cada e gere um
terceiro com os resultados da soma dos valores sendo a l�gica: soma o 1a
elemento do 1o vetor com o 5o elemento do 2o vetor, 2a elemento do 1o vetor
com o 4o elemento do 2o vetor, e assim sucessivamente.
1.3 - Construa um vetor de 13 posi��es com valores caracteres aleat�rios e na
sequ�ncia pedir para o usu�rio digitar um caractere e localizar onde este est�
no vetor e quantas vezes aparece.*/
//Algoritmo m�dia

#include<conio.h> //inclus�o da biblioteca conio - comandos I/O - Input/Output - Entrada e sa�da
#include<stdio.h> //inclus�o da biblioteca stdio - comandos de tela I/O
#include<iostream>//inclus�o da biblioteca mais completa
#include<locale.h>
#include<stdlib.h>
//declara��o vari�veis 
char Vet[13];
int Vetor[10];  //declarando a var�avel Aluno do tipo caracter com poss�veis 30 caracteres
int result, aux;
int VetorRandomizado[10];
int opc; // Vari�vel op��o do Menu
//int AuxVetor; // Vari�vel auxiliar para realizar as trocas dos elementos 

//In�cio
main(){ //comando da estrutura - Escopo - principal do programa
setlocale (LC_ALL,"Portuguese");

Menu: //R�tulo Menu 
printf("\n \n");	
printf("\n Menu de Op��es"); // Contruindo o Menu 
printf("\n 1 - Gerar valores Randomicamente");
//printf("\n 2 - Vetor de Ordem Decrescente");
printf("\n 2 - Vetor de Caracter e Igual");
//printf("\n 4 - Gerar valores Randomicamente");
printf("\n 2 - Sair Sistema");
printf("\n Digite a op��o desejada: ");
scanf("%i",&opc); //opc=getche();

switch (opc) { // Ninho de If
	
	case 1:{ printf("\n Vetor Aleat�rio");
	        for(int i=0;i<10;i++){
	        	VetorRandomizado[i]= rand() % 100; // Gera o Valor Aleat�rio
	        	printf("\n VetorRamdomizao[%i] : %i",i,VetorRandomizado[i]);
	    
	        }
//	        	result = VetorRandomizado[i]*VetorRandomizado[i]*VetorRandomizado[i];
	        	printf("\n O Resultado do calculo foi: %i", result);
	        printf("\n\n Tecle ENTER para voltar ao Menu");
	        getche();
			goto Menu; 
		break;
	}
	case 2:{ printf("\n Digite as 13 posi��es do Vetor Caracter");
			for(char i = 0;i < 14; i++){
				printf("\n Caracter Vetor [%i]: ", i);
				scanf("%c", &Vet[i]);
		}
			printf("\n Caracter Repetido do Vetor: ");
			for(char i=0;i < 14;i++){
				aux = 0;
				for(char j = i + 1; j < 14; j++){
					if(Vet[i] == Vet[j]){
						aux = 1;
					}
			}
			if(aux == 1){
				printf("\n %c", Vet[i]);
			}
		}
			
			printf("\n\n Tecle ENTER para voltar ao Menu");
	        getche();
			goto Menu; 
		break;
	}
	case 3:{exit(0);
		break;
	}
	default:{
		goto Menu;
	} 

}
}



