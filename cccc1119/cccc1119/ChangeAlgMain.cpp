#include "ChangeAlg.h"
#include <Windows.h>
using namespace std;

int main()
{
	int **data = NULL;
	bool mark[500] = { false }; // 모든 인자를 false로 갖는 bool형 배열
	int numOfData; // 데이터 개수
	int numOfSlot; // 슬롯 개수
	int SelectAlg; // 알고리즘 선택하는 변수

	while (1)
	{
		cout << "┌─< MENU >─┐" << endl
			 << "│ 1. LRU     │" << endl
			 << "│ 2. FIFO    │" << endl
			 << "│ 3. LFU     │" << endl
			 << "│ 4. RANDOM  │" << endl
			 << "└──────┘" << endl;
		cout << "어떤 교체 알고리즘을 사용하시겠습니까 ? ";
		cin >> SelectAlg;

		cout << "슬롯의 개수 : ";
		cin >> numOfSlot;
		cout << "데이터 개수 : ";
		cin >> numOfData;

		cout << "수행 시간 : " << FuncSpeed(0) << endl
			<< "적중률 : ";

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

		cout << endl << "결과 : " << endl;
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