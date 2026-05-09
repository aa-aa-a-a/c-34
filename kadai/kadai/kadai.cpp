#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <random>


void main()
{
	srand((unsigned int)time(NULL));


	/*for (int i = 0; i < 5; i++)
	{
		int num = rand();
		int mod = num % 101;

		printf("%d\n", mod);

	}
	*/

	int jap = rand() % 101;
	int eng = rand() % 101;
	int mat = rand() % 101;
	int sci = rand() % 101;
	int sco = rand() % 101;

	int total = jap + eng + mat + sci + sco;
	float avarage = (float)total / 5.0f;

		printf("国:%d点/英:%d点/数:%d点/理:%d点/社:%d点\n" , jap , eng , mat , sci , sco);
		printf("合計:%d点/平均:%.1f点\n",total, avarage);

		const int pass_score = 40;

		bool pass_jap = (pass_score <= jap);
		bool pass_eng = (pass_score <= eng);
		bool pass_mat = (pass_score <= mat);
		bool pass_sci = (pass_score <= sci);
		bool pass_sco = (pass_score <= sco);

		bool pass_all = pass_jap && pass_eng && pass_mat && pass_sci && pass_sco;

		const float pass_avarage = 60.0f;

		if (pass_avarage <= avarage && pass_all)
		{
			printf("合格です\n");
		}
		else
		{
			printf("不合格です\n");

			if (avarage < pass_avarage)
			{
				printf("平均点が60未満です\n");
			}

			if (!pass_jap)
			{
				printf("国語が40未満です\n");
			}
			if (!pass_eng)
			{
				printf("英語が40未満です\n");
			}
			if (!pass_mat)
			{
				printf("数学が40未満です\n");	
			}
			if (!pass_sci)
			{
				printf("理科が40未満です\n");
			}
			if (!pass_sco)
			{
				printf("社会が40未満です\n");
			}
		}

}


