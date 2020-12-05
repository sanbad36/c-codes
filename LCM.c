#include<stdio.h>

int main(){

int num1,num2,lcm,i;
puts("Enter two numbers :\n ");
scanf("%d %d",&num1,&num2);


int x=num1>num2?num1:num2;

for( i=x;i<=num1*num2;i=i+x)
	if(i%num1==0 && i%num2==0)
		break;
printf("%d\n",i );

}