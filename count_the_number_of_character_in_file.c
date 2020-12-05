#include<stdio.h>
int main(){

FILE *fp;
int len;
fp=fopen("alpha.txt","r");
	if(fp==NULL){
		printf("Error while opening the file\n");
		return ;
	}
	fseek(fp,0,SEEK_END);
	len=ftell(fp);
	fclose(fp);
	printf("The number of character in the file is =>  %d \n ",len);
}