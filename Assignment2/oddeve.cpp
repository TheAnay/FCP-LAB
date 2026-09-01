#include <stdio.h>
int main()
{
	/* Variable decleration */
	int a;

	/* Input section */
	printf("Enter a number:");
	scanf("%d",&a);
	
	/* Calculation & Output Section */
	if(a%2==0)
	{
		printf("The number is even.");
	}
	else
	{
		printf("The number is odd.");
	}
	return 0;
}