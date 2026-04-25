#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int t = (int)time(nullptr);

	int answer = t % 10;

	bool gameClear = false;

	printf("ゲーム始めんで  数字入れや\n");
	while (!gameClear)
	{
		
		int input;
		scanf_s("%d" , &input);

		int rank = 0;
		if (answer == input)
		{
			rank = 2;
		}
		else if (answer < input)
		{
			printf("でかいねん\n");
		}
		else if (answer > input)
		{
			printf("ちいさいねん\n");
		}

		int sub = answer - input;
		if (sub > -3 && sub < 3 && sub != 0)
		{
			rank = 1;
			printf("もうちょいやな\n");
		}

		switch (rank)
		{
		case 2:
			printf("Sランク\n");
			gameClear = true;
			break;
		case 1:
			printf("Aランク\n");
			break;
		default:
			printf("Bランク\n");
			break;
		}

		if (!gameClear)
		{
			printf("はよあてて\n");
		}
		else
		{
			printf("やるやん\n");
		}

	}
	return 0;
}