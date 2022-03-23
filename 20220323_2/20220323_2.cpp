#include <stdio.h>

int main()
{
	int a;
	scanf_s("%d", &a);
	int sum = 0,c = 1;
	int i;
	//c¿¬¼Ó
	char array[80];
		for (int j = 0; j < a; j++)
		{
			for (i = 0; i < 80; i++)
			{
				scanf_s("%c", &array[i]);
			}

			i = 0;

			while (array[i] != '\0')
			{
				if (array[i] == 'O')
				{
					sum = sum + c;
					c++;
				}
				else
				{
					c = 1;
				}
				i++;

			}

			printf("%d", sum);
		}
	

	return 0;
}