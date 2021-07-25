#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void SwapFN(int pval[3][3]
	, int p_x, int p_y
	, int p_xx, int p_yy)
{

}

void main()
{
	int pp[3][3] = { {1, 2, 3}
					, {4, 5, 6}
					, {7, 9, 8} 
					// , {9, 7, 8} 
	};

	// left
	int tempval = pp[2][1]; // 9
	pp[2][1] = pp[2][2];
	pp[2][2] = tempval; // 8

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (pp[y][x] == 9)
			{
				printf("* " );
			}
			else
			{
				printf("%d ", pp[y][x]);
			}
		}
		printf("\n");
	}

	int val = 0;

}

