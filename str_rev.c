#include<stdio.h>

int main(){

	
	char a[10]="sanket";
	int len=0;
	//while(a[len]&& ++len);
	len=0;
	while(a[len]!='\0'){
	len++;
	}
	

	
	
	int j=len-1;
int i=0;
	while(i<j){

		char temp;
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;

		i++;
		j--;
	}

i=0;
while(a[i])
	printf("%c\n",a[i++]);

}
