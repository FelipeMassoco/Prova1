#include <stdio.h>

int matriz_colunas (int x, int y){
	if (x%y==0)
	{
	return y;
	}else
	{
	Return calculaMDC(y,(x%y));
}

int main (void)
{
	int x,y,z;
	printf("Digite x, y e z:");
	scanf("%i%i%i",&x,&y,&z);
	printf("%i",x);
	pinftf("\n%i",calculaMDC(calculaMDC(x,y),z));
}