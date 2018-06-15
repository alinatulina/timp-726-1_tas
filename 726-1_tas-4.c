#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node *next;
} node;
typedef node* list;

int init(list *root) { 
	*root = NULL;
	return 1;
}

int push(list *head, int value) { 
	list tmp = (list)malloc(sizeof(node));
	tmp->next = *head;
	tmp->value = value;
	*head = tmp;
	return 1;
}

int pop(node **head) { 
	node *out;
	int value;
	out = *head;
	*head = (*head)->next;
	value = out->value;
	free(out);
	return value;
}

int destroy(list *root) { 
	list next;
	while (*root != NULL) {
		next = *root;
		*root = (*root)->next;
		free(next);
	}
	return 1;
}

int print(list *lst) { 
	list buff = *lst;
	while (buff != NULL) {
		printf("%d ", buff->value);
		buff = buff->next;
	}
	printf("\n");
	return 1;
}

int main() {
	list head;
	init(&head); 
	int x, sz, m, k;

	scanf("%d", &sz); 
		for (int i = 0; i < sz; ++i) 
		{
			scanf("%d", &x);
			push(&head, x); 
		}
	print(&head); 
	scanf("%d", &k);
	for (int i = 0; i < k; ++i) {  
		pop(&head);
	}
	print(&head);
	destroy(&head); 
	print(&head);
	return 0;
}
