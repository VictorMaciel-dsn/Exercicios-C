#include <stdio.h>
int main()

{
	int num;
	num = 300;
	
	while(num >= 10 && num <= 300 && num --)
	{
		
			if((num % 7) == 0)
			{
				printf("%i\n", num);
			}
	}
}

