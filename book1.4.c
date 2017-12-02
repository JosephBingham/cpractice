#include<stdio.h>

void main(){
	int fahr, celsius;
	printf("celsius     fahr\n");
	for(celsius = 0 ; celsius <= 300 ; celsius += 20){
	printf("%3d\t   %6.1f\n", celsius, (9.0/5.0)*(celsius+31));

}

}
