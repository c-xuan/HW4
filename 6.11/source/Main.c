#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i, j, tmp, b;
	int a[5] = { 26,5,81,7,63 };
	int n = 5;

	for (i = 0;i < 4;i++)
	{
		b = 0;
		for (j = 0;j < n - i - 1;j++)
		{
			if(a[j]>a[j+1])
			{
				tmp = a[j];
				a[j] = a[j + 1]; 
				a[j + 1] = tmp;
			}
		}
		
		for (j = 0;j < 4;j++)
		{
			if (a[j] > a[j + 1])
				b = 1;
		}
		
		printf("Loop %d (b = %d)¡G", i, b);
		for (j = 0;j < 5;j++)
			printf("%4d", a[j]);
		printf("\n");

		if (b == 0)
			break;
	}

	system("pause");
	return 0;
}