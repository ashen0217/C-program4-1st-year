#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int mark; //create varaible
	printf("Enter english marks");
	scanf("%d", &mark);
	
	if (mark >=75){
		printf("A \n");  //condition 
	}
	else if (mark>=65){
		printf("B \n");  //condition
	}
	else if (mark>=55){  // condition
		printf("C \n");
	}
	else if (mark>=35){  //condition
		printf("S \n");
	}
	else {
		printf("F \n");  //condition
	}
	return 0;
}

