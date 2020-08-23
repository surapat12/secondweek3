#include<stdio.h>
int main()
{
	int n;
	int x = 1;
	printf("Enter the number :");
	scanf_s("%d", &n);
	int z = 1;
	while (z <= n)
	{
		printf("*");
		z++;
	}
	printf("\n");
	while (x <= n-2)
	{
		int y = 1;
		while (y <= n)
		{
			if (y == 1)
			{
				printf("*");
				y++;

			}

			if (2 <= y <= n - 1)
			{
				printf(" ");
				y++;
			}


			if (y == n)
			{
				printf("*");
				y++;
			}
		}
		printf("\n");
		x++;
	}
	int a = 1;
	while (a <= n)
	{
		printf("*");
		a++;
	}
	
	
	return 0;
}
