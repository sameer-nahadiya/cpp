#include<stdio.h>
int main(){
	int unit,price;
	printf("enter unit");
	scanf("%d",&unit);
	if(unit<=100){
		printf("no charge");
	}
	else if((unit>100)&&(unit<=200))
	{
		unit=unit-100;
		printf("bill=%d",unit*5);
	}
	else if (unit>200)
	{
		unit=unit-200;price=500;
		printf("bill=%d",price=price+(unit*10));
	}
	
	return 0 ;
}