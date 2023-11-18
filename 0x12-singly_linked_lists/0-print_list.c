#include "list.h"
/**
  * print_list - Function name
  * @h: Pointer to the head node
  * Return: size of node
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			count++;
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
			temp = temp->next;
			count++;
		}
	}
	return (count);
}
