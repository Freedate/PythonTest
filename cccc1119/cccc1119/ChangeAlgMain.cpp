#include "ChangeAlg.h"
#include <Windows.h>
using namespace std;

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
			 << "�� 1. LRU     ��" << endl
			 << "�� 2. FIFO    ��" << endl
			 << "�� 3. LFU     ��" << endl
			 << "�� 4. RANDOM  ��" << endl
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