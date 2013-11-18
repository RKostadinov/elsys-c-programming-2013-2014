#include <stdio.h>

int main()
{
	int l=1, n=1, i = 1, j, number, digit;
	int a[10];

	scanf ("%d", &number);
	//Saving the number as a string
	for (i=10; i>=0; i--)
	{
 		a[i] = number % 10;
 		number = number / 10;
	}

				while (n<=10)
				{
					digit = a[n];
						
						for(i = n + 1; i<=10; i++)
				{
 					if((a[n]==a[i]) && (a[i]!=00))
 					{
 						l++; a[i]=00;
 					}
		}
				if(l > 1) {printf("%d : %d\n", digit, l);}
				n++;
	l=1;
			}	
return 0;	
}