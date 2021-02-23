#include <stdio.h>
int main()

{
	int num;
	num = 1000;
	
	while(num >= 1000 && num <= 1299 && num ++)
	{
		
			if((num % 11) == 5)
			{
				printf("%i\n", num);
			}
	}
}

