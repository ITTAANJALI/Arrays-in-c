#include<stdio.h>
int main()
{                                                          
	int num;                                                            //initializing the variable                                                 
	printf("enter the value of 'n':");                                  //enter the n value 
	scanf("%d",&num);                                                   //read the num value

	if(num>0)                                                           //check if num is posive or not positive
	{
		if(num%2==0)                                                   //check if positive number is even or not 
		{
			printf("%d is positive even number\n",num);               //if condition is true positive even is printed
		}
		else
		{
			printf("%d is positive odd number\n",num);               //if condition is false positive odd is printed
		}
	}
	else if(num<0)                                                  //check if num is negative
	{
			if(num%2==0)                                           //check if negative number is even or not 
			{
				printf("%d is negative even number\n",num);               //if condition is true negative even is printed

			}
			else
			{
				printf("%d is negative odd number\n",num);               //if condition is false negave odd is printed
			}
	}
	else
		{

		printf("%d is neither odd nor even\n",num);         //if both conditions false then print the else part

		}

}

