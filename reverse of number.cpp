#include<stdio.h>
int main(){
	int i=1,a,b,r,sum=0;
	printf("enter the number if digits of number :\n");
	scanf("%d",&a);
	printf("enter the digit :\n");
	scanf("%d",&b);
	while(i<=a)
	{
		r=b%10;
		sum=sum*10+r;
		b=b/10;
		i++;
		}
	printf("the reverse number is %d",sum);
	return 0;
	}
	
	
	
	

