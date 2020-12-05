// Author: sanket Badjate.
#include<stdio.h>
int main(){

FILE *fp;
int len;
fp=fopen("alpha.txt","r");    // reading the file in read mode
	if(fp==NULL){
		printf("Error while opening the file\n");
		return 0;
	}
	fseek(fp,0,SEEK_END); // send the read/write pointer to the end of the file (SEEK_END is the macro).
	len=ftell(fp);		// it gives the current position of the pointer.
	fclose(fp);			// close the file.
	printf("The number of characters in the file is =>  %d \n ",len);
}