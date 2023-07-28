#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 * @h: Pointer to the list_t list to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
    size_t node_count = 0; // Variable to store the number of nodes printed.

    // Traverse the linked list using a while loop.
    while (h)
    {
        if (!h->str) // If the string pointer is NULL.
        {
            printf("[0] (nil)\n"); // Print "[0] (nil)" to indicate an empty string.
        }
        else
        {
            printf("[%u] %s\n", h->len, h->str); // Print the string's length and content.
        }

        h = h->next; // Move to the next node in the linked list.
        node_count++; // Increment the node count for each node printed.
    }

    return node_count; // Return the total number of nodes printed.
}
