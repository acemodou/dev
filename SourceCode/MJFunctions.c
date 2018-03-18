#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseIntegers()
{
	int number, rev;
    printf("Enter the number you want to reverse\n"); //Ask user for input
    scanf("%d",&number);							 //keyboard input
    if(number <= 0)
    	printf("Please enter positive integers");    //Check to make sure user don't enter 
   
    else										     //negative numbers or alphabets
    {
       while(number > 0)          
    {
    	  rev = number % 10;         
    	  printf("%d\t",rev);
    	  number /= 10;  
    }
   
   		 printf("\n");
}
}

void perfectNumbers()
{
	int n=1,sum = 0,i =1;
	
	     while(n<=1000)
	     {
	 
	     	
		  while(i< n/2+1)
		{
			if(n%i == 0)
			 	sum+=i;
				i++;
		}
		 if(sum == n)
		    printf("%d is a perfect number",n);
		    n++;	
}
	}

int fibonacciSum(int n)
{
	int prev1 = 1,prev2 = 2;
		int sum = 0;

		for(int curr = 0; curr <=n;curr++)
		{
			curr = prev1+prev2;
			if(curr % 2 == 0)
				sum+=curr;
			prev1 = prev2;
			prev2 = curr;
		}
		printf("Sum of fibonacci numbers between 1 and %d is: %d\n",n,sum);

		return sum;
}

int multipleOfNumbers(int n1, int n2)
{
	  int sum =0;

    for(int i = 1; i < 1000; i++)
    {
    	if(i % n1 == 0 || i % n2 == 0)
    	sum += i;
 
    }
        printf(" Sum of multiple of %d or %d below 1000 = %d \n",n1,n2,sum);

        return sum;

}
  


	




int main(void)
{

    

	//reverseIntegers();
	//perfectNumbers();
	//fibonacciSum(4000000);
	multipleOfNumbers(3,5);
   
}

