#include <iostream>

#define _ORIGINAL SetConsoleTextAttribute(COL, 0x0007);
#define _GREEN SetConsoleTextAttribute(COL, 0x0002);
#define _RED SetConsoleTextAttribute(COL, 0x000c);
#define _YELLOW SetConsoleTextAttribute(COL, 0x000e);
#define COL GetStdHandle(STD_OUTPUT_HANDLE)

int LRU(int **&data, int numOfData, int numOfSlot, bool mark[]);
int LFU(int **&data, int numOfData, int numOfSlot, bool mark[]);
int FIFO(int **&data, int numOfData, int numOfSlot, bool mark[]);
int Random(int **&data, int numOfData, int numOfSlot, bool mark[]);
int FuncSpeed(int speed);
int AccuracyRate(int numOfData, int rightAns);