#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num[100];
	int p, q, i;
	FILE *fp;
	int index = 0;

	fp = fopen("argv[1]", "r");

	/*Read the file line by line*/
	while (fscanf(fp, "%d", &num[index])==1)
	{
		index++;
	}

	/*close the file*/
	fclose(fp);

	for (i = 0; i <= index; i++)
	{
		p = 1;
		while (p <= num[i])
		{
			q = 1;
			while (q <= num[i])
			{
				if (p*q == num[i])
					printf("%d = %d*%d", num[i], p, q);
				q++;
			}
			p++;
		}
	}

	return (0);
}
