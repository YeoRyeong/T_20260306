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

	int Deck[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10 };

	int ComputerScore = 0; // 보다 작을 경우 큰 쪽이 이김. ==경우 플레이어 승
	int PersonScore = 0;

	int ComputerRandomNum = 0;
	int UserRandomNum = 0;

	bool IsComputerOver = true;
	bool IsUserOver = true;

	for (;;)
	{
		cout << "사람 : ";

		// 사람
		for (int i = 0; i < Card; i++)
		{
			UserRandomNum = rand() % 12;
			Person[i] = Deck[UserRandomNum];
			PersonScore += Person[i];
			cout << Person[i] << " ";

			if (PersonScore > 21) 
			{
				IsUserOver = true;
			}

			else if (PersonScore < 21)
			{
				IsUserOver = false;
			}
		}

		cout << "\n사람 Score : " << PersonScore;
		cout << "\n" << endl;
		cout << "컴퓨터 : ";

		// 컴퓨터
		for (int j = 0; j < Card; j++)
		{
			ComputerRandomNum = rand() % 12;
			Computer[j] = Deck[ComputerRandomNum];
			ComputerScore += Computer[j];
			cout << Computer[j] << " ";

			if (ComputerScore > 21) {
				IsComputerOver = true;
			}
			else if (ComputerScore < 21)

			{
				IsComputerOver = false;
			}
		}

		cout << "\n컴퓨터 Score : " << ComputerScore;
		cout << endl;


		if (IsComputerOver == false && IsUserOver == false)
		{
			if (PersonScore >= ComputerScore)
			{
				cout << "\n사람 승";
			}

			if (ComputerScore > PersonScore)
			{
				cout << "\n컴퓨터 승";
			}
		}

		else if ((IsComputerOver == true) || (IsUserOver == true))
		{
			if ((IsComputerOver == false) && (IsUserOver == true))
			{
				cout << "\n사람 패";
			}

			else if ((IsComputerOver == true) && (IsUserOver == false))
			{
				cout << "\n컴퓨터 패";
			}
		}

		break;
	}


	return 0;
}