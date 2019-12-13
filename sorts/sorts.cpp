#include <stdio.h>
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)

int main()
{

	int i, j;
	for (i = 0; i < 9; i++)
	{
		for (j = 9; j > i; j--)
		{
			if (a[j - 1] > a[j])
				swap(int, a[j - 1], a[j]);
		}
	}


	for (i = 0; i < 10; i++)
	{
		printf("x[%d] = %d\n", i, a[i]);
	}


	return 0;
}