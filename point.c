#include<stdio.h>

struct point{
	int x;
	int y;
	struct point *  next;
};
void main(){
	struct point p;
	struct point f;
	p.x = 1;
	p.y = 1;
	f.x = 2;
	f.y = 2;
	f.next = NULL;
	p.next = &f;
     printf("%d %d %d %d\n", (&p)->x, (&p)->y, p.next->x, p.next->y);

}

