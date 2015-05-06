/***
*Chapter 2 Part I Program Structure and Execution
*Code to print the byte representation of program objects.
*Little endian or big endian.
***/

#include <stdio.h>

typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, int len) {
	int i;
	for (i = 0; i < len; i++)
		printf("%.2x", start[i]);
	printf("\n");
}

void show_int(int x) {
	show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(int x) {
	show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointter(void *x) {
	show_bytes((byte_pointer)&x, sizeof(void *));
}