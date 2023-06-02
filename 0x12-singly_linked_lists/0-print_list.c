#include <lists.h>

#include <stdlib.>

/*
 * Print all element of a list_t
 *
 * Description:
 * a function that prints all the elements of a list_t list
 *
 * Return: Always nothing
*/

int main(void)
{

	/* print all element of a list with four nodes */
	list_t node2 = {"stay", NULL};
	list_t node4 = {"for", NULL};
	list_t node6 = {"you", NULL};
	list_t node8 = {"all", NULL}

	/* Link the nodes together */
	nodes2.next = &node4;
	node4.next = &node6;
	node6.next = &node8;

	/* Print all list with nodes */
	size_t numNodes = print_list(&node2);
	printf("Number of nodes: %d\n, numNodes);


	return (0);


}
