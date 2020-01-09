#include<stdio.h>

int main()
{
	long int i, j, lpf, num = 600851475143, count = 1;

	for(i = 1; i < num; i++)
	{
		printf("Fator check with %d\n", i);
		if(num % i == 0)
		{
			for(j = 2, count = 0; j < i; j++)
				if(i % j == 0) count++;
			if(count = 0) lpf = j;
		}
	}

	printf("The largest prime factor is %d", lpf);
	return 0;
}