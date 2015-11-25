#include "ChangeAlg.h"
#include <iostream>

int LRU(int **&data, int numOfData, int numOfSlot, bool mark[])
{
	data = new int*[numOfSlot];
	for (int i = 0; i < numOfSlot; i++)
		data[i] = new int[numOfData];

	int rightAns = 0; // 적중하는 수를 저장하는 변수 , 바꾸셔도 됩니다
	// 여기에 추가하세요
	// 적중시에는 mark를 true로 바꿔주세요

	return AccuracyRate(numOfData, rightAns); // 인자 넣어서
}

int LFU(int **&data, int numOfData, int numOfSlot, bool mark[])
{
	data = new int*[numOfSlot];
	for (int i = 0; i < numOfSlot; i++)
		data[i] = new int[numOfData];

	int rightAns = 0; // 적중하는 수를 저장하는 변수 , 바꾸셔도 됩니다
	

	
	// 적중시에는 mark를 true로 바꿔주세요

	return AccuracyRate(numOfData, rightAns); // 인자 넣어서
}

int FIFO(int **&data, int numOfData, int numOfSlot, bool mark[])
{
	data = new int*[numOfSlot];
	for (int i = 0; i < numOfSlot; i++)
		data[i] = new int[numOfData];

	int rightAns = 0; // 적중하는 수를 저장하는 변수 , 바꾸셔도 됩니다
	// 여기에 추가하세요
	// 적중시에는 mark를 true로 바꿔주세요

	return AccuracyRate(numOfData, rightAns); // 인자 넣어서
}

int Random(int **&data, int numOfData, int numOfSlot, bool mark[])
{
	data = new int*[numOfSlot];
	for (int i = 0; i < numOfSlot; i++)
		data[i] = new int[numOfData];

	int rightAns = 0;
	// 여기에 추가
	// 적중시에는 mark를 true로 바꿔주세요

	return AccuracyRate(numOfData, rightAns); // 인자 넣어서
}


int FuncSpeed(int speed)
{
	// 추후에 만들 예정
	return 0;
}

int AccuracyRate(int numOfData, int rightAns)
{
	return rightAns / numOfData;
}