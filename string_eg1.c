#include<stdio.h>
#define scanf "%s sanket"
// int main(){

// printf(scanf,scanf);


// }


//-------------------------------------------

// char * getstring(){


// static char s[]="print it";
// return s;

// }

// int main(){

// printf("%s\n",getstring() );


//----------------------------------------------------------------------

struct sanket{

int i,j;

};

int main(){

struct sanket a,*p;

a.i=10;
p=&a;

p->j=100;
printf("%d , %d  ",p->i,(*p).j);//(*p).i);

// int x=10;
// register *p=&x;

// printf("%d",*p);



}