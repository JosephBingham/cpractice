#include<stdio.h>

void main(){

int c, i;

int ndigit[10];
for(i = 0; i< 10; ++i)
	ndigit[i]=0;

while((c = getchar()) != EOF){
	if(c>= '0' && c <= '9')
		switch(c){
		case '0': ++ndigit[0]; break;
		case '1': ++ndigit[1]; break;
		case '2': ++ndigit[2]; break;
		case '3': ++ndigit[3]; break;
		case '4': ++ndigit[4]; break;
		case '5': ++ndigit[5]; break;
		case '6': ++ndigit[6]; break;
		case '7': ++ndigit[7]; break;
		case '8': ++ndigit[8]; break;
		case '9': ++ndigit[9]; break;
		}
	}
for(i = 0; i< 10; ++i)
	printf("%d : %d\n", i, ndigit[i]);


}
