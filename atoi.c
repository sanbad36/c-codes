#include<stdio.h>

int myatoi(char *s){

	int mynum=0;
	while(*s >'0' && *s<'9'){

		mynum=mynum*10+(*s-'0');
s++;
}
return mynum;


}

int give_add(char *s){

int num=myatoi(s);
int sum=0;
while(num){
	sum=sum+num%10;
	num/=10;
}
return sum;
}


int main(){

char a[30];
	puts("Enter the character version of number :\n ");
	gets(a);
	printf("The int version is = %d\n",myatoi(a) );

	printf("The addition of the digits is : %d\n\n",give_add(a));

}