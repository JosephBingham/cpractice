#include<stdio.h>

struct linkedlist{
	int data;
	struct linkedlist * prev;
	struct linkedlist * next;
};

void enstruct(struct linkedlist last, int dat){
	struct linkedlist new = {.data = dat , .prev = &last, .next = last.next};
	last.next->prev = &new;
	last.next = &new;

}

void main(){
	struct linkedlist head = {.data = 0, .prev = NULL, .next = NULL};
	struct linkedlist tail = {.data = 2, .prev = &head, .next = NULL};
	head.next = &tail;
	enstruct(head, 1);
//	struct linkedlist middle = {.data = 1, .prev = &head, .next = &tail};
//	head.next = &middle;
//	tail.prev = &middle;
	printf("%d, %d, %d \n", head.data, head.next->data, head.next->next->data);


}
