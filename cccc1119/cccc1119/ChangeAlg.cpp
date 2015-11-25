#include "ChangeAlg.h"
#include <iostream>

int LRU(int **&data, int numOfData, int numOfSlot, bool mark[])
{
	data = new int*[numOfSlot];
	for (int i = 0; i < numOfSlot; i++)
		data[i] = new int[numOfData];

	int rightAns = 0; // �����ϴ� ���� �����ϴ� ���� , �ٲټŵ� �˴ϴ�
	// ���⿡ �߰��ϼ���
	// ���߽ÿ��� mark�� true�� �ٲ��ּ���

	return AccuracyRate(numOfData, rightAns); // ���� �־
}

int LFU(int **&data, int numOfData, int numOfSlot, bool mark[])
{
	data = new int*[numOfSlot];
	for (int i = 0; i < numOfSlot; i++)
		data[i] = new int[numOfData];

	int rightAns = 0; // �����ϴ� ���� �����ϴ� ���� , �ٲټŵ� �˴ϴ�
	

	
	// ���߽ÿ��� mark�� true�� �ٲ��ּ���

	return AccuracyRate(numOfData, rightAns); // ���� �־
}

int FIFO(int **&data, int numOfData, int numOfSlot, bool mark[])
{
	data = new int*[numOfSlot];
	for (int i = 0; i < numOfSlot; i++)
		data[i] = new int[numOfData];

	int rightAns = 0; // �����ϴ� ���� �����ϴ� ���� , �ٲټŵ� �˴ϴ�
	// ���⿡ �߰��ϼ���
	// ���߽ÿ��� mark�� true�� �ٲ��ּ���

	return AccuracyRate(numOfData, rightAns); // ���� �־
}

int Random(int **&data, int numOfData, int numOfSlot, bool mark[])
{
	data = new int*[numOfSlot];
	for (int i = 0; i < numOfSlot; i++)
		data[i] = new int[numOfData];

	int rightAns = 0;
	// ���⿡ �߰�
	// ���߽ÿ��� mark�� true�� �ٲ��ּ���

	return AccuracyRate(numOfData, rightAns); // ���� �־
}


int FuncSpeed(int speed)
{
	// ���Ŀ� ���� ����
	return 0;
}

int AccuracyRate(int numOfData, int rightAns)
{
	return rightAns / numOfData;
}