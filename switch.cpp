#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a:- ");
	scanf("%d",&a);
	printf("Enter the desired operator(+,-,*,/):- ");
	scanf(" %c",&c);
	printf("Enter the value of b:- ");
	scanf("%d",&b);
	
	switch(c)
	{
		case '+':
			printf("Result:- %d",a+b);
			break;
		case '-':
		    printf("Result:- %d",a-b);
			break;
		case '*':
		    printf("Result:- %d",a*b);
			break;
		case '/':
		    printf("Result:- %d",a/b);
			break;			
	}
}

