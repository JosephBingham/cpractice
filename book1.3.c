#include <stdio.h>


void main(){
	int fahr;
	printf("fahr     celsius\n");
	for(fahr = 0 ; fahr <= 300 ; fahr += 20){
	printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-31));

}

}
