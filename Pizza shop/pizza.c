#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*“Taste Me” pizza shop makes pizzas in two types and two sizes as shown below. 
Pizza Type         Large (LKR)  Medium(LKR) 

1 – Classic range  1720.00      975.00 


2 –Signature range  1820.00     1000.00 


This pizza shop offers discounts for the customers as given below. 
Credit card   20%
Loyalty card   15% 
Online orders   5% 
Other          0%

 
You are asked to write a program to print the invoice for the pizza orders. One invoice can have*/
int main()
{
	//declare the variable of pizza type         //credit = C loyalty = L online orders = O other = N  
														
	int type;									   
	char size;
	int amount; //number of pizzas to buy
	float payment;
	char ptype; //payment type
	
	//ask user to input pizza type 
	printf("Enter the pizza type: \n");
	scanf("%d", &type); 
	
	//ask user to enter the pizza size
	printf("Enter the pizza size: \n");
	scanf(" %c", &size);
	
	//ask user to enter the pizza amount
	printf("Enter the amount of pizza that you want: ");
	scanf("%d", &amount);
	
	if (type == 1 && size == 'L' )
	{
		printf("Enter the payment method: ");
		scanf(" %c", &ptype);
		if (ptype == 'C' )
		{
			payment = (80/100.0)*1720*amount;
			printf("your payment is %.2f", payment);
		}
		else if(ptype == 'L')
		{
			payment = (85/100.0)*1720*amount;
			printf("Your payment is %.2f", payment);
		}
		else if(ptype == 'O')
		{
			payment = (95/100.0)*1720*amount;
			printf("Your payment is %.2f", payment);
		}
		else
		{
			payment = 1720*amount;
			printf("Your payment is %.2f", payment);
		}
	}
	else if(type == 1 && size == 'M')
	{
		printf("Enter the payment method: ");
		scanf(" %c", &ptype);
		if (ptype == 'C')
		{
			payment = (80/100.0)*975*amount;
			printf("your payment is %.2f", payment);
		}
		else if(ptype == 'L')
		{
			payment = (85/100.0)*975*amount;
			printf("Your payment is %.2f", payment);
		}
		else if(ptype == 'O')
		{
			payment = (95/100.0)*975*amount;
			printf("Your payment is %.2f", payment);
		}
		else
		{
			payment = 975*amount;
			printf("Your payment is %.2f", payment);
		}	
	}
	else if (type == 2 && size == 'L')
	{
		printf("Enter the payment method: ");
		scanf(" %c", &ptype);
		if (ptype == 'C')
		{
			payment = (80/100.0)*1820*amount;
			printf("your payment is %.2f", payment);	
		}
		else if (ptype == 'L')
		{
			payment = (85/100.0)*1820*amount;
			printf("Your payment is %.2f", payment);
		}
		else if(ptype == 'O')
		{
			payment = (95/100.0)*1820*amount;
			printf("Your payment is %.2f", payment);
		}
		else 
		{
			payment = 1820*amount;
			printf("Your payment is %.2f", payment);
		}
	}
	else if (ptype == 2 && size == 'M')
	{
		printf("Enter the payment method: ");
		scanf(" %c", &ptype);
		if (ptype == 'C')
		{
			payment = (80/100.0)*1000*amount;
			printf("your payment is %.2f", payment);	
		}
		else if (ptype == 'L')
		{
			payment = (85/100.0)*1000*amount;
			printf("Your payment is %.2f", payment);
		}
		else if (ptype == 'O')
		{
			payment = (95/100.0)*1000*amount;
			printf("Your payment is %.2f", payment);
		}
		else
		{
			payment = 1000*amount;
			printf("Your payment is %.2f", payment);
		}
	}
	
	return 0;
}
