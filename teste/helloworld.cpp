#include <stdio.h>

int main (void){
	
	char nome [60] , apelido [10] ;

	
	int idade  ;
	
	int id = 50;
	
	float altura; 
	
		
  printf ("\nESCREVA SEU NOME :\n");
  fgets(nome,60,stdin);
 
 
  printf("\nSEU APELIDO E :\n");
  fgets (apelido,10,stdin);
 
 
  printf("\nESCREVA SUA IDADE:\n");
  scanf("%d",&idade);
 
 
  printf("\nESCREVA SUA ALTURA:\n");
  scanf("%f",&altura);
 
  
 
 
 
 printf ("\n_________Dados__________\n ");
 
 
 printf("\nNOME DO USUARIO :%s \n",nome );
 
 
 printf("\nAPELIDO DO USUARIO :%s\n",apelido );
 
 
 printf("\nIDADE DO USUARIO :%d \n ",idade );
 
 
 printf("\nID DO USUARIO :%i \n ",id );
 
 
 printf("\nALTURA DO USUARIO:%f \n",altura);
 
 
 
 
 printf ("\n-----------------FIM DO CADASTRO--------------\n  ");
 

 return 0;
}
