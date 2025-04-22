#include<stdio.h>
#include<stdlib.h>
sum(int,int,int);
//Assum that user input three functionsa and display the total of three numbers
int main()
{
	int n1,n2,n3;
	printf("Enter your three numbers to add: ");
	scanf("%d%d%d", &n1,&n2,&n3);
	printf("Answer of adding three number are  = %d", sum(n1,n2,n3));
	
	return 0;
}
int sum(int a,int b,int c)
{
	int add = a+b+c;
	return add;
}
