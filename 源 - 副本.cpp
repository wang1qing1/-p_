
#include<stdio.h>
int main() 
{
       int j; int t;
	for (int i = 2; i <= 1000; i++) 
	{
		int sum = 0;
		for (j = 1; j <=i/2; j++) 
		{	     
				 t = i % j;
			if (t == 0)
				sum += j;
		}
		if (sum == i)
			printf("%d\t", i);
	}
	return 0;
}

