#include <stdio.h>


int main(){
	
	int i,j,number;
	
	printf("Enter a number: ");
	scanf("%d",&number);
	
	for(i=number;i>=1;i--)
	{
		for(j=1;j<=number-i;j++)
		{
		printf(" ");
		}	
		
		for(j=1;j<=2*i-1;j++)
		{
		printf("*");
		}
		printf("\n");
	} 
}
