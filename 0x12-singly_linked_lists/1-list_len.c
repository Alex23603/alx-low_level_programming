#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * insertNode - adds a new node at the beginning of a linked list
 * @head: double pointer to the head of the list
 * @data: new data to be added to the node
 *
 * Return: void
 */
void insertNode(struct Node **head, char *data)
{
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

	if (newNode == NULL)
		return;

	strcpy(newNode->data, data);
	newNode->next = *head;
	*head = newNode;
}
