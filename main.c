#include <stdlib.h>
#include <stdio.h>

#define TAM 4
int matriz[TAM][TAM];

void gerarMatriz()
{
    for (size_t l = 0; l < TAM; l++)
        {
            for (size_t c = 0; c < TAM; c++)
            {
                if(l == c)
                {
                    matriz[l][c] = 1;
                }
                
                else
                {
                    matriz[l][c] = 0;
                }
            }
        }
}

void diagonalPrincipal()
{
  for(int l = 0; l < TAM; l++)
  {
    for(int c = 0; c < TAM; c++)
    {
      if(l == c)
      {
        printf("%d ", matriz[l][c]);
      }

      printf(" ");
    }
     printf("\n");
  }
  
  printf("\n");
}

void mostraMatriz()
{
  for (size_t l = 0; l < TAM; l++)
        {
            for (size_t c = 0; c < TAM; c++)
            {
              printf("%d ", matriz[l][c]);
            }
            printf("\n");
        }


    printf("\n");
}

void trianguloSuperior()
{
  for(int l = 0; l < TAM; l++)
    {
      for(int c = 0; c < TAM; c++)
      {
        if(l < c)
        {
          printf("%d", matriz[l][c]);
        }

        printf(" ");
      }
      printf(" \n");
    }
    
    printf(" \n ");
}


void trianguloInferior()
{
  for(int l = 0; l < TAM; l++)
  {
    for(int c = 0; c < TAM; c++)
    {
      if(l > c)
      {
        printf("%d ", matriz[l][c]);
      }

      printf(" ");
    }
     printf("\n");
  }
  
  printf("\n");
}

void menu()
{
    int opc;

    do
    {
      printf("MENU DE OPCOES\n");
      printf("=======================\n");
      printf("[1] Mostrar a Matriz\n");
      printf("[2] Digonal Principal\n");
      printf("[3] Triangulo superior\n");
      printf("[4] Triangulo Inferior\n");
      printf("[5] Sair\n");
      printf("========OPCAO: ");
      scanf("%d", &opc);
      switch (opc)
      {
      case 1: system("clear"); mostraMatriz();
          break;
      case 2: system("clear"); diagonalPrincipal();
          break;
      case 3: system("clear"); trianguloSuperior();
          break;
      case 4: system("clear"); trianguloInferior();
      default:
          break;
      }
    } while (opc != 5);
    
}

int main()
{ 
    gerarMatriz();
    menu();
    return 0;
}