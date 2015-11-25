
#include <stdlib.h>
#include "SimpleHeap.h"

void HeapInit(Heap * ph)
{
	ph->numOfData = 0;
	ph->heapArr[0].data = NULL;
	ph->heapArr[0].pr = NULL;
}

int HIsEmpty(Heap * ph)
{
	if (ph->numOfData == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void HInsert(Heap * ph, HData data, Priority pr)
{
	HeapElem newData;

	newData.data = data;
	newData.pr = pr;

	int idx = ++ph->numOfData;
	ph->heapArr[idx] = newData;

	while ( newData.pr < ph->heapArr[GetParentIDX(idx)].pr )
	{
		ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
		ph->heapArr[GetParentIDX(idx)] = newData;

		idx = GetParentIDX(idx);
	}

	printf(" ** insert\n");
	for (int i = ph->numOfData; i > 0; i--)
	{
		printf("Heap %d : data->%c, pr->%d\n", i, ph->heapArr[i].data, ph->heapArr[i].pr);
	}
}

HData HDelete(Heap * ph)
{
	int idx = 1;
	HeapElem delData = ph->heapArr[idx];						//지울 데이터
	HeapElem chData = ph->heapArr[GetHiPriChildIDX(ph, idx)];	//pr이 작은 child
	HeapElem leafData = ph->heapArr[ph->numOfData];				//마지막 데이터

	ph->numOfData--;
	ph->heapArr[1] = leafData;

	while ( leafData.pr > chData.pr )
	{
		ph->heapArr[idx] = ph->heapArr[ GetHiPriChildIDX(ph, idx) ];
		ph->heapArr[ GetHiPriChildIDX(ph, idx) ] = leafData;

		if ( GetHiPriChildIDX(ph, GetHiPriChildIDX(ph, idx)) != 0 )
		{
			idx = GetHiPriChildIDX(ph, idx);
			chData = ph->heapArr[GetHiPriChildIDX(ph, idx)];
		}
		else
		{
			break;
		}
	}

	printf(" ** delete\n");
	printf("Heap 1 : data->%c, pr->%d 삭제\n", delData.data, delData.pr);

	printf(" ** delete 상태\n");
	for (int i = ph->numOfData; i > 0; i--)
	{
		printf("Heap %d : data->%c, pr->%d\n", i, ph->heapArr[i].data, ph->heapArr[i].pr);
	}

	if (ph->numOfData == 0)
		printf("Heap에 더이상 데이터가 남아있지 않습니다.\n");

	return delData.data;
}

int GetParentIDX(int idx)
{
	return idx / 2;
}

int GetLChildIDX(int idx)
{
	return idx * 2;
}

int GetRChildIDX(int idx)
{
	return GetLChildIDX(idx) + 1;
}

int GetHiPriChildIDX(Heap *ph, int idx)
{
	if (GetLChildIDX(idx) > ph->numOfData)
	{
		return 0;
	}
	else if (GetLChildIDX(idx) == ph->numOfData)
	{
		return GetLChildIDX(idx);
	}
	else 
	{
		if ( ph->heapArr[GetLChildIDX(idx)].pr > ph->heapArr[GetRChildIDX(idx)].pr )
			return GetRChildIDX(idx);
		else
			return GetLChildIDX(idx);
	}
}


