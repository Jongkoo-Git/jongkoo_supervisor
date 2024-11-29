#include <stdio.h>

int main(void)
{
	int a;
	int c;
	int d=3;
	






	for (; d < 10;)
	{
		for (a = 1; a <= 9; a++)
		{

			printf("\n");
			for (c=d-1; c <= d+1 && c<10;c++ )
			{
				printf("%3d * %d = %d \t", c, a, c * a);
			
			}
			printf("\n");
		
			

		}
		printf("  ...................................................................");
		d = d + 3;
	}




}
