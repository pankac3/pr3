#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
	int x, value;
	Node * head = NULL;
	Node * tail = NULL;
	do {
		x = 0;
		printf("Please enter a number (1-6) to make a selection.\n");
		printf("\t1 - Insert Head\n");
		printf("\t2 - Insert tail\n");
		printf("\t3 - Delete a Node\n");
		printf("\t4 - Delete all\n");
		printf("\t5 - Print List\n");
		printf("\t6 - Close Program\n");
		scanf("%d",&x);
		if(x < 1 || x > 6) {
			x = 0;
		}
		switch(x) {
			case 0 :
			printf("Error, invalid input\n");
			break;

			case 1 :
			printf("Please enter a value: ");
			scanf("%d",&value);
			head = List_insert(head, value);
			break;

			case 2 :
			printf("Please enter a value: ");
			scanf("%d",&value);
			tail = List_insert_last(head, value);
			break;			

			case 3 :
			printf("Please enter a value: ");
			scanf("%d",&value);
			head = List_delete(head, value);
			break;
			  
			case 4 :
			printf("Deleting all nodes.\n");
			List_destroy(head);
			break;			

			case 5 :
			printf("Your List:\n");
			List_print(head);
			break;			

			case 6 :
			printf("Goodbye.\n");
			break;
		}
	}while(x != 6);
}