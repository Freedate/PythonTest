#include <iostream>
#include <Windows.h>
using namespace std;

int LRU(int **&data, int numOfData, int numOfSlot, bool mark[]);
int LFU(int **&data, int numOfData, int numOfSlot, bool mark[]);
int FIFO(int **&data, int numOfData, int numOfSlot, bool mark[]);
int Random(int **&data, int numOfData, int numOfSlot, bool mark[]);
int FuncSpeed(int speed);
int AccuracyRate(int numOfData, int rightAns);

#define _ORIGINAL SetConsoleTextAttribute(COL, 0x0007);
#define _GREEN SetConsoleTextAttribute(COL, 0x0002);
#define _RED SetConsoleTextAttribute(COL, 0x000c);
#define _YELLOW SetConsoleTextAttribute(COL, 0x000e);
#define COL GetStdHandle(STD_OUTPUT_HANDLE)

int main()
{
	int **data = NULL;
	bool mark[500] = { false }; // ��� ���ڸ� false�� ���� bool�� �迭
	int numOfData; // ������ ����
	int numOfSlot; // ���� ����
	int SelectAlg; // �˰��� �����ϴ� ����

	while (1)
	{
		cout << "����< MENU >����" << endl
			 << "�� 1. LRU ��" << endl
			 << "�� 2. FIFO ��" << endl
			 << "�� 3. LFU ��" << endl
			 << "�� 4. RANDOM ��" << endl
			 << "����������������" << endl;
		cout << "� ��ü �˰����� ����Ͻðڽ��ϱ� ? ";
		cin >> SelectAlg;

		cout << "������ ���� : ";
		cin >> numOfSlot;
		cout << "������ ���� : ";
		cin >> numOfData;

		cout << "���� �ð� : " << FuncSpeed(0) << endl
			<< "���߷� : ";

		switch (SelectAlg)
		{
		case 1:
			cout << LRU(data, numOfData, numOfSlot, mark);
			break;
		case 2:
			cout << FIFO(data, numOfData, numOfSlot, mark);
			break;
		case 3:
			cout << LFU(data, numOfData, numOfSlot, mark);
			break;
		case 4:
			cout << Random(data, numOfData, numOfSlot, mark);
			break;
		}

		cout << endl << "��� : " << endl;
		for (int i = 0; i < numOfSlot; i++)
		{
			for (int j = 0; j < numOfData; j++)
			{
				if (mark[i * numOfSlot + j])
				{
					_RED cout << data[i][j];
					_ORIGINAL
				}
				else
					cout << data[i][j];
				cout << " ";
			}
			cout << endl;
		}
		cout << endl << endl;
	}

	return 0;
}

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
	// ���⿡ �߰��ϼ���
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