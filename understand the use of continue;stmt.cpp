#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	for(n=1;n<=5;n++)
	{
		if(n==3)
		{
			printf("hello\n");
			continue;
		}
		printf("number= %d\n",n);
	}
	printf("out of loop");
	getch();
}
