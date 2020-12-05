#include<stdio.h>
#include<string.h>
int main(){


char a[20];
gets(a);
int i;
int len=strlen(a);
for(i=0;i<len/2;i++){

	if(a[i]!=a[len-1-i])
	{
		printf("Not palindromme");
		break;
	}


}
if(i==len/2);
printf("palindrome");



}