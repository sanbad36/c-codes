#include<stdio.h>

int main(){

	FILE *fp;
	char ch;
	fp=fopen("MYFILE.txt","w");
	if(fp==NULL){
		printf("Error while creating the file\n\n");
		return 0;
	}

	printf("Enter the data which you want to write into file \n");

	while((ch=getchar())!=EOF){     // instead of getchar() , we can also able to write getc(stdin) [stdin is the standard intput stream 
											// the systax of getc() is {char * getc(char* s)}]

		putc(ch,fp);  // put the char by char into the file till the EOF is not triggered . IN LINUX EOF can to created by ctr+d ... in win ctr+z

	}

	fclose(fp); 
	char ch1;
	fp=open("MYFILE","r");

	if(fp==NULL){
		printf("Error while creating the file\n\n");
		return 0;
	}

	while((ch1=getc(fp))!=EOF){

		//putc(ch,stdout);
//

		printf("%c",ch1 );
	}

fclose(fp);




}