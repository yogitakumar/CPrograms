#include<stdio.h>  
int main()    
	{    
		int num,r,sum=0,temp;    
		printf("Enter number : ");    
		scanf("%d",&num);    
		temp=num;    
		while(num>0)    
			{    
				r=num%10;    
				sum=(sum*10)+r;    
				num=num/10;    
			}    
		if(temp==sum)    
			printf("%d is a Palindrome number.",num);    
		else    
			printf("%d is not a Palindrome number.",num);   
		return 0;  
	}   