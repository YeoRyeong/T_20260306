// 내가 한 코드
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	int Card = 3; // -> 랜덤으로 카드를 나눠줌

	int Computer[3] = { 0, };
	int Person[3] = { 0, };

	int ComputerScore = 0; // 보다 작을 경우 큰 쪽이 이김. ==경우 플레이어 승
	int PersonScore = 0;


	for (;;)
	{
		cout << "사람 : ";

		// 사람
		for (int i = 0; i < Card; i++)
		{
			Person[i] = (rand() % 10) + 1;
			PersonScore += Person[i];
			cout << Person[i] << " ";
		}

		cout << "\n사람 Score : " << PersonScore;
		cout << "\n" << endl;
		cout << "컴퓨터 : ";

		// 컴퓨터
		for (int j = 0; j < Card; j++)
		{
			Computer[j] = (rand() % 10) + 1;
			ComputerScore += Computer[j];
			cout << Computer[j] << " ";
		}

		cout << "\n컴퓨터 Score : " << ComputerScore;
		cout << endl;


		if (PersonScore < 21 || ComputerScore < 21)
		{
			if (PersonScore >= ComputerScore)
			{
				cout << "\n사람 승";
			}

			else if (ComputerScore > PersonScore)
			{
				cout << "\n컴퓨터 승";
			}
		}

		if (PersonScore > 21 || ComputerScore > 21)
		{
			if (PersonScore > ComputerScore)
			{
				cout << "\n사람 패";
			}

			else if (ComputerScore >= PersonScore)
			{
				cout << "\n컴퓨터 패";
			}
		}

		break;
	}


	return 0;
}