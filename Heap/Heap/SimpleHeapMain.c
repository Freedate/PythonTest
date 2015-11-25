#include <stdio.h>
#include "SimpleHeap.h"

int main(void)
{
	Heap heap;
	HeapInit(&heap);

	HInsert(&heap, 'A', 5);
	printf("\n");
	HInsert(&heap, 'B', 2);
	printf("\n");
	HInsert(&heap, 'C', 1);
	printf("\n");
	HDelete(&heap);
	printf("\n");

	HInsert(&heap, 'a', 3);
	printf("\n");
	HInsert(&heap, 'b', 6);
	printf("\n");
	HInsert(&heap, 'c', 1);
	printf("\n");
	HDelete(&heap);
	printf("\n");

	while ( !HIsEmpty(&heap) )
	{
		HDelete(&heap);
		printf("\n");
	}

	int a;
	scanf_s("%d", &a);

	return 0;
}
