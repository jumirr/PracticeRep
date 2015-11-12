#include <stdio.h>
#include <stdlib.h>
void addNode(struct node* link);
void printList (struct node* head);

struct node{
	int x;
	struct node* next;
};

struct node* head;

int main(){
	head = (struct node*)malloc(sizeof(struct node));
	addNode(head);
	printList(head);
	free(head);
	
	
}

void addNode(struct node* link){
	int n;
	struct node* tail = link;
	printf("\nEnter a value: ");
	scanf("%d",&tail->x);
	for(n=1; (tail->x) != -1; n++){
		tail->next = (struct node*)malloc(sizeof(struct node));
		tail = tail->next;
		printf("\nEnter a value: ");
		scanf("%d",&tail->x);
	}
	tail->next = 	NULL;
}



// void addNode(struct node* link){
//	printf("Enter value(-1 for exit): ");
//	scanf("%d",&link->x);
//	if(link->x == -1)
//	link->next = NULL;
//	else {
//		link->next =(struct node*)malloc(sizeof(struct node));
//		addNode(link->next);
//	}
//	
//}

void printList(struct node* head){
	struct node* localHead = head;
	printf("\nElements are: head");
	while(NULL != localHead->next){
		printf("->%d",localHead->x);
		localHead = localHead->next;
	}
}
