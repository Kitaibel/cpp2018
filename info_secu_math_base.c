#include <stdio.h>
#include <stdlib.h>

int isPrime(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int prime(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(isPrime(i)&&(x%i==0))
		{
			printf("%d\n",i);
		}
	}
	return 1;
}

int showdiv(int x) 
{
	int i;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			printf("%d\n",i);
		}
	}
	return 1;
}

int main(int argc, char *argv[]) {
	int number,mode;
	printf("1-prime\n2-div\nPlease input mode: ");
	scanf("%d",&mode);
	system("cls");
	printf("please input the number: ");
	scanf("%d",&number);
	if(mode==1)
	{
		prime(number);
	}
	else if(mode==2)
	{
		showdiv(number);
	}
	else
	{
		printf("error\n");
	}
	system("pause");
	return 0;
}
