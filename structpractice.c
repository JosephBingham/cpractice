#include<stdio.h>
struct room{

	int l;
	int h;
	int d;

};
void main(void){
	struct room bedroom = {.l = 1, .h = 3, .d = 4};

	printf("%d %d %d\n", bedroom.l, bedroom.h, bedroom.d);
 int bedstats[]= {bedroom.l, bedroom.h, bedroom.d};
int i;
for(i = 0; i < 3; i++){
	int f = bedstats[i];
	printf("%d\v", f);

}
printf("this is a test of -> %d \n",(&bedroom)->l);
printf("\n");

}


