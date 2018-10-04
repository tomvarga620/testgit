#include <stdio.h>


int main(){
//10000 200 -40% 160 = 10160
//10160 203.2 -40,60% 162,6 = 10322,6


	float amount,interest,tax,interestm;
	int years,i;
	

	printf("Enter amount: ");
	scanf("%f",&amount);
	
	printf("Enter interest: ");
	scanf("%f",&interest);
	
	printf("Enter a years: ");
	scanf("%d",&years);
	
	if(0<amount && amount<=10000)
	{
		if(0<interest && interest<=100)
		{
			if(1<years && years<20)
			{
				for(i=1;i<=years;i++)
				{

				interestm=(interest/(float)100)*amount;
				tax= interestm*0.2;
				amount= amount+(interestm-tax);
			
				}
				printf("%1.2f",amount);
			}
			else
			{
			return 0;
			}
		}
		else
		{
		return 0;
		}
	}
	else
	{
	return 0;
	}
}
