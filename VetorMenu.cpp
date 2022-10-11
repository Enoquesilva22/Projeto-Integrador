/*Construa um algoritom que leia um vetor de 10 posi��es com valores
inteiros e contrua o seguinte Menu: 
1 - Vetor Ordem Crescente
2 - Vetor Ordem Decrescente
3 - Vetor Original - Localizar Maior e Menor e respetivos �ndices
4 - Gerar Valores de entrada de vetor Randomicamente(aleat�rio)*/
//Algoritmo m�dia

#include<conio.h> //inclus�o da biblioteca conio - comandos I/O - Input/Output - Entrada e sa�da
#include<stdio.h> //inclus�o da biblioteca stdio - comandos de tela I/O
#include<iostream>//inclus�o da biblioteca mais completa
#include<locale.h>
#include<stdlib.h>
//declara��o vari�veis 
int Vetor[10];  //declarando a var�avel Aluno do tipo caracter com poss�veis 30 caracteres
int Maior,Menor,IndMaior,IndMenor;
int VetorCresc[10],VetorDecre[10],VetorRandomizado[10];
int opc; // Vari�vel op��o do Menu
int AuxVetor; // Vari�vel auxiliar para realizar as trocas dos elementos 

//In�cio
main(){ //comando da estrutura - Escopo - principal do programa
setlocale (LC_ALL,"Portuguese");

//entrada - Preencher o vetor
printf("\n Entrada de valores no Vetor Original");
printf("\n \n");
for(int i=0; i<10;i++){
	printf("\n Digite o valor do Vetor[%i]: ",i);
	scanf("%i",&Vetor[i]);}

Menu: //R�tulo Menu 
printf("\n \n");	
printf("\n Menu de Op��es"); // Contruindo o Menu 
printf("\n 1 - Vetor de Ordem Crescente");
printf("\n 2 - Vetor de Ordem Decrescente");
printf("\n 3 - Vetor Original - Maior e Menor - Ind�ces");
printf("\n 4 - Gerar valores Randomicamente");
printf("\n 5 - Sair Sistema");
printf("\n Digite a op��o desejada: ");
scanf("%i",&opc); //opc=getche();

switch (opc) { // Ninho de If
	case 1:{ printf("\n Vetor em ordem Crescente");
	         for(int i=0;i<10;i++){
	         	VetorCresc[i]=Vetor[i];}//transferir dados
	         
			 //Formula de colocar o Vetor em Ordem Crescente	         
			 for(int i=0;i<10;i++){
	           for(int j=0;j<10;j++){
	          	 if(VetorCresc[i] < VetorCresc[j]){
                     AuxVetor=VetorCresc[i];
                     VetorCresc[i]=VetorCresc[j];
                     VetorCresc[j]=AuxVetor;
	          	 }
	          }
	         }
	        for(int i=0;i<10;i++){
	        	printf("\n VetorCresc[%i]: %i",i,VetorCresc[i]);
	        }
	        printf("\n\n Tecle ENTER para voltar ao Menu");
			getche();
			goto Menu; 
		break;
	}
	case 2:{
		printf("\n Vetor em ordem Decrescente");
	         for(int i=0;i<10;i++){
	         	VetorDecre[i]=Vetor[i];}//transferir dados
	         	         
			 for(int i=0;i<10;i++){
	           for(int j=0;j<10;j++){
	          	 if(VetorDecre[i] > VetorDecre[j]){
                     AuxVetor=VetorDecre[i];
                     VetorDecre[i]=VetorDecre[j];
                     VetorDecre[j]=AuxVetor;
	          	 }
	          }
	         }
	        for(int i=0;i<10;i++){
	        	printf("\n VetorDecre[%i]: %i",i,VetorDecre[i]);
	        }
	        printf("\n\n Tecle ENTER para voltar ao Menu");
	        getche();
			goto Menu; 
		break;
	}
	case 3:{
		printf("\n Maior e Menor e seus �ndices");
		Maior=Vetor[0];
		Menor=Vetor[0];
		for(int i=0;i<10;i++){
			if(Vetor[i]> Maior){
				Maior=Vetor[i];
				IndMaior=i;
			}
			if(Vetor[i]< Menor){
				Menor=Vetor[i];
				IndMenor=i;
			}
			}
		printf("\n Maior[%i]: %i",IndMaior,Maior);
		printf("\n Menor[%i]: %i",IndMenor,Menor);
		
		printf("\n\n Tecle ENTER para voltar ao Menu");
		getche();
			goto Menu; 
		break;
	}
	case 4:{ printf("\n Vetor Aleat�rio");
	        for(int i=0;i<10;i++){
	        	VetorRandomizado[i]= rand() % 100; // Gera o Valor Aleat�rio
	        	printf("\n VetorRamdomizao[%i] : %i",i,VetorRandomizado[i]);
	        }
	        printf("\n\n Tecle ENTER para voltar ao Menu");
	        getche();
			goto Menu; 
		break;
	}
	case 5:{exit(0);
		break;
	}
	default:{
		goto Menu;
	} 
	
}
	

}//fecha escopo do programa - algoritmo


