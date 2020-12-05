// Author --Sanket Badjate

#include<stdio.h>
int main(){


int a[]={10,20,30,40,50,60};  // a is array of an integer.

int *p[]={a,a+1,a+2,a+3,a+4,a+5}; // p is an array of pointers of type int .According to precedance [] is higher priority than * ,
									// therefore p[] is evaluate first and then * ,that is , *(p[]) . 

						/*

									
						a->	100  	102   104   106   108	110
							10   	20    30    40    50   60 

							^		^	  ^		^	  ^	  ^	
							|		|	  |		|	  |	  | 		
						p-> 200   202   204   206   208  210

							100   102   104   106   108  110

						*/

int ** pp=p;

pp++;
printf("%d %d %d \n",pp-p,*pp-a,**pp);

*pp++;


printf("%d %d %d \n",pp-p,*pp-a,**pp );

++*pp;

printf("%d %d %d \n",pp-p,*pp-a,**pp );

++**pp;
printf("%d %d %d \n",pp-p,*pp-a,**pp );




}