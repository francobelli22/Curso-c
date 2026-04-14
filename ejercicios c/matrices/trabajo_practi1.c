#include <stdio.h>

int main()
{
  int matriz1[3][3];
  int matriz2[3][3];

printf ("ingrese un numeros de la matris 1:\n");
for (int x = 0; x < 3; x++){
	for (int j = 0; j < 3; j++)
	{
	scanf ("%d", &matriz1[x][j]);
	}
	
}

printf ("ingrese un numero para la posicion de la matriz:\n");
for (int x = 0; x < 3; x++){
	for (int j = 0; j < 3; j++)
	{
	scanf ("%d", &matriz2 [x][j]);
	}
}
  // Recorrer la matriz y la va a sumar
  for (int x = 0; x < 3; x++)
  {
    for (int y = 0; y < 3; y++)
    {
      printf("\t %d ", matriz1[x][y] + matriz2[x][y]);
    }
    printf("\n");
  }

  return 0;
}