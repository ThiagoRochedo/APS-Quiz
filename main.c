#include <stdio.h>
int main ()
{
int resposta;
char nome [120];
int contador = 0;


printf("\nVamos iniciar o QUIZ!\n");

printf ("\nDigite seu nome:\n");
scanf ("%[^\n]s", nome);

while (contador != 1) {

printf ("\n Quantas vezes o Brasil foi campeão da Copa do Mundo?\n 1) 1 vez.\n 2) 8 vezes.\n 3) 10 vezes.\n 4) 5 vezes.\n \n Qual sua resposta? ");
scanf ("%d", &resposta);


if ( resposta == 4) 
{
printf ("\nVocê acertou\n");
contador = 1;
}

else {
printf ("\nVocê errou\n");

}

}

while (contador == 1) {
 
 printf ("\nQual é a capital de Amazonas?\n 1) Cuiabá.\n 2) São Paulo\n 3) Manaus\n 4) Porto Alegre\n \n Qual sua resposta? ");
scanf ("%d" , &resposta);
 
 if (resposta == 3) {
 printf ("\nVocê acertou\n");
 contador = 0;
 }


else {
  printf ("\nvoce errou\n");
}
}

while (contador == 0) {
 
 printf ("\nO que significa o comando printf na linguagem C?\n 1) Pare.\n 2) Escrever\n 3) Leia\n 4) Somar\n \n Qual sua resposta? ");
scanf ("%d" , &resposta);
 
 if (resposta == 2) {
 printf ("\nVocê acertou\n");
 contador = 1;
 }


else {
  printf ("\nvoce errou\n");
}
}

while (contador == 1) {
 
 printf ("\nQual o nome do bloco militar formado pela União Soviética e a maioria dos países socialistas ?\n 1) Tratado de Versalhes.\n 2) URSS\n 3) pacto de Varsóvia\n 4) OTAN\n \n Qual sua resposta? ");
scanf ("%d" , &resposta);
 
 if (resposta == 3) {
 printf ("\nVocê acertou\n");
 contador = 0;
 }


else {
  printf ("\nvoce errou\n");
}
}


while (contador == 0) {
 
 printf ("\nQual é o maior país do mundo em área (km²)?\n 1) China\n 2) Índia\n 3) Indonésia\n 4) Rússia \n \n Qual sua resposta? ");
scanf ("%d" , &resposta);
 
 if (resposta == 4) {
 printf ("\nVocê acertou\n");
 contador = 1;
 }


else {
  printf ("\nvoce errou\n");
}
}

while (contador == 1) {
 
 printf ("\nA região da Groenlândia pertence a qual país?\n 1) Dinamarca\n 2) Canadá\n 3) México\n 4) Espanha\n \n Qual sua resposta? ");
scanf ("%d" , &resposta);
 
 if (resposta == 1) {
 printf ("\nVocê acertou\n");
 contador = 0;
 }


else {
  printf ("\nvoce errou\n");
}
}

printf ("\nParabéns %s, você terminou o Quiz!\n", nome);

return 0;
}

