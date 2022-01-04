#include<stdio.h>
int main()
{
	int num,r=0,count=0;
	scanf("%d",&num);
	while(num!=0)
	{
		r=num%10;
		if(r==0)
		
			count++;
			num=num/10;
		
		
	}
	printf("%d",count);
}