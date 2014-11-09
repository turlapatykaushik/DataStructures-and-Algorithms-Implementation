/*
 * @turlapatykaushik
 * github url: github.com/turlapatykaushik
 
*/

// Linked List structure

typedef struct list {
item_type item;
struct list *next;
};

// Insertion into a Linked List

void insert_list(list **l, item_type x)
{
	list *p;
	p = malloc(sizeof(list)); //allocating memory 
	p->item = x;
	p->next = *l;
	*l = p;
}

//Searching in a Linked List

void search(struct node *head, int key)
{
	while(head != NULL) //if head is NULL then no list to search for
	{
		if(head->item == key)
		print "Some print statement saying element we are searching for is found";
		else
		return search(head->next,key) 
	}
}

//Deletion from a Linked List

void delete(struct node **head)
{
	struct node *temp;
	while(*head != NULL)
	{
		temp = *head; //point head to a temporary value
		*head = (*head)->next; //now the head is next element to previous head
		free(temp); //now the memory in which the deleted node was there is removed i.e space increases , wastage of memory is not there
	}
}
