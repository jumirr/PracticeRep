#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
struct node {
	char name[25];
	char id[10];
	char major[100];
	struct node *next;
};

typedef struct node link;
link *head;

void info(void);

int main(void){
	info();
}

void info(void){
	link *tail, *node;
	char ch;
	
	tail = head = NULL;
	
	printf("Enter Data? ");
	ch = getch();
	
	while(ch != 'n'){
		node = (link*)malloc(sizeof(link));
		printf("\nEnter the name: ");
		gets(node->name);
		fflush(stdin);
		
		printf("\nEnter id: ");
		gets(node->id);
		fflush(stdin);
		
		printf("\nEnter major: ");
		gets(node->major);
		fflush(stdin);
		
		node->next = NULL;
		
		if(head == NULL){
			head = node;
		}else{
			tail->next = node;
		}
		
		tail = node;
		
		printf("\n\n\nEnter again? ");
		ch = getch();
	}
	
	printf("\n\n	Name	id	major");
	while(head != 	NULL){
		printf("\n\n	%s	%s	%s",head->name,head->id,head->major);
		head = head->next;
	}
}
