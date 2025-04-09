#ifndef SORT_H
#define SORT_H

#include <stddef.h>  /* For size_t */
#include <stdio.h>   /* For printf */
#include <stdlib.h>  /* For malloc, free, etc. */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer value stored in the node.
 * @prev: Pointer to the previous element of the list.
 * @next: Pointer to the next element of the list.
 *
 * Description: Defines a node in a doubly linked list for integer values.
 */
typedef struct listint_s
{
const int n;            /* Integer value of the node */
struct listint_s *prev; /* Pointer to the previous node */
struct listint_s *next; /* Pointer to the next node */
} listint_t;

/* Sorting algorithms for arrays */
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

/* List operations */
void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);

/* Utility functions */
/**
 * print_array - Prints an array of integers.
 * @array: Pointer to the array to print.
 * @size: The size of the array.
 *
 * Description: This function prints the elements of an array in a
 * comma-separated format, followed by a new line.
 */
void print_array(const int *array, size_t size);

void quick_sort_recursive(int *array, int low, int high, size_t size);
int lomuto_partition(int *array, int low, int high, size_t size);

#endif /* SORT_H */
