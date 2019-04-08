#include <stdio.h>
#include <math.h>

int fatorial();
int menu();
int primo();
int nprimos();
int potencia();
int raiz();
int anobissexto();
int media();
int ponderada();
int nomematr();

int main()
{
    int opcao;

	opcao =menu();

    while(opcao != 0){
        switch(opcao){

        case 1:
        fatorial();
        opcao = menu();
        break;

        case 2:
        primo();
        opcao = menu();
        break;

        case 3:
        nprimos();
        opcao = menu();
        break;

        case 4:
        potencia();
        opcao = menu();
        break;

        case 5:
        raiz();
        opcao = menu();
        break;

        case 6:
        anobissexto();
        opcao = menu();
        break;

        case 7:
        media();
        opcao = menu();
        break;

        case 8:
        ponderada();
        opcao = menu();
        break;

        case 9:
        nomematr();
        opcao = menu();
        break;

        default:
        printf("\nNumero invalido !!!\n");
        opcao = menu();
        break;

        }
    }

    return 0;
}

int menu(){
	int opcao;
	
    printf("\n###################################\n");
    printf(" *    1-Fatorial de um Numero         \n");
    printf(" *    2-Verificar numeros Primo       \n");
    printf(" *    3-Verificar N numeros Primos    \n");
    printf(" *    4-Calcular a Potencia           \n");
    printf(" *    5-Calcular a Raiz               \n");
    printf(" *    6-Verificar se e Bissexto       \n");
    printf(" *    7-Calcular a Media              \n");
    printf(" *    8-Calcular a Media Ponderada    \n");
    printf(" *    9-Nome e matricula              \n");
    printf(" *    0-Sair          				  \n");
    printf("#####################################\n");

    printf("\nEscolha uma opcao: \n");
    scanf("%d",&opcao);

return(opcao);
}

//Fatorial de um numero
int fatorial(){
	
    int c, n, fat;

    printf("\n Insira um numero para calcular seu fatorial: ");
    scanf("%i", &n);

    fat = 1;

    for(c=1; c<=n; c++)
        {
            fat *= c;
        }
    printf("\nO fatorial do numero %i e: %i\n",n, fat);

    return 0 ;
}

//Saber se um numero é primo
int primo(){
    
    int i=0,num;

    printf("informe um numeor: ");
    scanf("%i",&num);

	if(num > 0){
	
    if (num == 1 ) {
            printf ("\n 1 e primo.\n");};
	}
    for(i = (num-1); i >= 1 ; i--){
      if (((num %i) == 0) && i >= 1 || i == 1){
          printf ( "nNao e primo.\n");
          break ;
      }
      else{
        if (i == 2){
          printf ( "E primo.\n");
          break;
        }
      }
    }
    
  return  0;
}

//Se n numeros são primos
int nprimos(){
    
    int n, i, total;

    printf("informe quantos numero deseja verificar: ");
    scanf("%d", &total);

    if(total > 0){
        for(i = 1;i <= total; i++){
            primo();
        }
    }
    else{
        printf("invalido");
    }


    return 0;
}

//Saber a potencia de um numero perguntado ao usuario
int potencia(){
    
    int a, cont,b;


    printf("\nInforme um numero de ponto flutuante\n");
    scanf("%d", &a);
    printf("\nInforme um numero inteiro\n");
    scanf("%d", &b);

    cont = pow(a,b);

    printf("\nSua potencia e: %.4e\n", cont);

    return 0;
}

//Saber a raiz de um numero fornecido pelo usuario
int raiz(){
    
    float a, result;
    int b;

    printf("\nInforme um numero de ponto flutuante\n");
    scanf("%d", &a);

    printf("\nInforme um numero inteiro\n");
    scanf("%d", &b);

    result = (float)1/b;

    printf("\nSua raiz e: %.4e\n", pow(a,result));

    return 0;
}

//Saber se um ano é ou nao bissexto
int anobissexto(){
    
    int ano;

    printf("\nQual o ano voce deseja consultar\n");
    scanf("%d", &ano);

    if(ano > 0){
        if((ano%4) == 0){
            printf("\n%i e bissexto\n", ano);
        }else{
            printf("\n%i nao e bissexto\n", ano);
        }
    }else{
        printf("numero invalido\n");
    }
    return 0;
}

//Faz uma media simples
int media(){
    
    float n1, n2, nF;

    printf("\nInforme sua primeira nota:\n");
    scanf("%f", &n1);

    printf("\nInforme sua segunda nota:\n");
    scanf("%f", &n2);

    if((n1 >= 0 && n1 <= 10) && (n2 >= 0 && n2 <= 10)){
        nF = (n1 + n2)/2;
        printf("\nA media final e %.2f\n", nF);
    }else{
        printf("\nAS notas sao invalidas\n");
    }

    return 0;
}

//Faz a media ponderada
int ponderada (){
    
    float n1, n2, n3, media;

    printf("\nInforme sua primeira nota:\n");
    scanf("%f", &n1);

    printf("\nInfome sua segunda nota:\n");
    scanf("%f", &n2);

    printf("\nInforme sua terceira nota:\n");
    scanf("%f", &n3);

    media = (n1 + n2 +(n3*2))/4;

    if(media >= 7){
        printf("\n\nAprovado com media %.2f\n", media);
    }else{
        printf("\n\nReprovado com media %.2f\n",media);
    }

    return 0;
}

//Trasforma a matricula em hexadecimal
int nomematr(){
    
    int matri = 1420211768;

    printf("########################\n");
    printf("      Nome: Gabriel Santos Rocha   \n");
    printf("      Matricula em hexadecimal: %x\n", matri);
    printf("########################\n");

    return 0;
}
