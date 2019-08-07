#include "checkGameOver.h"


bool checkElement(int a[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			if (a[i][j] == 0) return false;
	}
	return true;
}





bool checkGameOver(int a[4][4])
{
	
	
	if (checkElement(a))
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (a[i][j] == a[i][j + 1] || a[i][j] == a[i + 1][j]) return false;
			}
		}

		for (int i = 0; i < 4; i++)
		{
			if (a[i][3] == a[i + 1][3] || a[3][i] == a[3][i + 1])  return false;
		}

		return true;

	}
	else return false;

	
	
}