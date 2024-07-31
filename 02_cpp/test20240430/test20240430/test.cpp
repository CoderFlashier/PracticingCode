#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name[3] = { "ZhangSan", "LiSi", "WangWu" };
	int score[3][3] = { {100, 100, 100}, {90, 50, 100}, {60, 70, 80} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		int score_sum = 0;
		for (j = 0; j < 3; j++)
			score_sum += score[i][j];

		cout << name[i] << "'s score is " << score_sum << "." << endl;
	}
	return 0;
}