/***
*Chapter 2 Part I Program Structure and Execution
*An application of the property that a^a = 0 for any bit vector a.
***/

#include <stdio.h>

void inplace_swap(int *x, int *y) {
	/* There is no perfomance advantage to this way of swapping */
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

void reverse_array(int a[], int cnt) {
	/* This func always works on arrays of even length,
	but it sets the middle element to 0 whenever the array has odd length.
	*/
	//int first, last;
	//for (first = 0, last = cnt - 1;
	//	first <= last;
	//	first++, last--)
	//	inplace_swap(&a[first], &a[last]);

	/* Simple modification to eliminate this problem */
	int first, last;
	for (first = 0, last = cnt - 1;
		first < last;
		first++, last--)
		inplace_swap(&a[first], &a[last]);
}