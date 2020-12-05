#include<stdio.h>
#include<stdlib.h>
#define DEFAULT_SIZE 10

char * resize(char *p,int capacity);
int main(){

char *input;
char ch;
int count=0,capacity=DEFAULT_SIZE;

	input=(char *) malloc (DEFAULT_SIZE*sizeof(char));

	if(input==NULL){

		printf("NO MEMORY IS AVAILABLE BY THE MALLOC\n\n\n" ); }

	while((ch=getchar())!=EOF){

		if(count==capacity){

			input=resize(input,capacity);
			capacity=capacity+DEFAULT_SIZE;
		}
		input[count++]=ch;

	}
	if(count==capacity){

		resize(input,capacity);
	}
	else{
		input[count]='\0';
	}
puts("\n\n\n\t\t\t\tYOUR DATA : \n\n");
	puts(input);
	printf("\n\nTOTAL CHARACTERS = %d\n\n\n",count-1);
}


char *resize(char *p ,int capacity){
	return realloc(p,capacity+DEFAULT_SIZE);
}








