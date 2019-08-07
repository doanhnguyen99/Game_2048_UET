
#include "Move.h"
// Move down
void Down(int a[][4], int &sum)
{

	for (int col = 0; col < 4; col++)
	{
		vector<int> SaveElementExist;
		vector<int> Result;
		for (int i = 3; i > -1; i--)
		{
			if (a[i][col] != 0)
			{
				SaveElementExist.push_back(a[i][col]);
			}
		}

		if (SaveElementExist.size() > 0)
		{
			for (int i = 0; i < SaveElementExist.size() - 1; i++)
			{
				if (SaveElementExist[i] == SaveElementExist[i + 1] && SaveElementExist[i] != 0)
				{
					SaveElementExist[i] *= 2;
					SaveElementExist[i + 1] = 0;
					sum += SaveElementExist[i];
				}
			}

			for (int i = 0; i < SaveElementExist.size(); i++)
			{
				if (SaveElementExist[i] != 0) Result.push_back(SaveElementExist[i]);
			}


			if (Result.size() < 4)
				for (int i = 0; i < 4; i++)
				{
					if (3 - i < Result.size())
						a[i][col] = Result[3 - i]; else a[i][col] = 0;
				}
		}

	}
}

// Move Left
void Left(int a[][4], int& sum)
{

	for (int row = 0; row < 4; row++)
	{
		vector<int> SaveElementExist;
		vector<int> Result;
		for (int i = 0; i < 4; i++)
		{
			if (a[row][i] != 0)
			{
				SaveElementExist.push_back(a[row][i]);
			}
		}

		if (SaveElementExist.size() > 0)
		{
			for (int i = 0; i < SaveElementExist.size() - 1; i++)
			{
				if (SaveElementExist[i] == SaveElementExist[i + 1] && SaveElementExist[i] != 0)
				{
					SaveElementExist[i] *= 2;
					SaveElementExist[i + 1] = 0;
					sum += SaveElementExist[i];
				}
			}

			for (int i = 0; i < SaveElementExist.size(); i++)
			{
				if (SaveElementExist[i] != 0) Result.push_back(SaveElementExist[i]);
			}


			if (Result.size() < 4)
				for (int i = 0; i < 4; i++)
				{
					if (i < Result.size())
						a[row][i] = Result[i]; else a[row][i] = 0;
				}
		}

	}
}

// Move right

void Right(int a[][4], int &sum)
{

	for (int row = 0; row < 4; row++)
	{
		vector<int> SaveElementExist;
		vector<int> Result;
		for (int i = 3; i > -1; i--)
		{
			if (a[row][i] != 0)
			{
				SaveElementExist.push_back(a[row][i]);
			}
		}

		if (SaveElementExist.size() > 0)
		{
			for (int i = 0; i < SaveElementExist.size() - 1; i++)
			{
				if (SaveElementExist[i] == SaveElementExist[i + 1] && SaveElementExist[i] != 0)
				{
					SaveElementExist[i] *= 2;
					SaveElementExist[i + 1] = 0;
					sum += SaveElementExist[i];
				}
			}

			for (int i = 0; i < SaveElementExist.size(); i++)
			{
				if (SaveElementExist[i] != 0) Result.push_back(SaveElementExist[i]);
			}


			if (Result.size() < 4)
				for (int i = 0; i < 4; i++)
				{
					if (3 - i < Result.size())
						a[row][i] = Result[3 - i]; else a[row][i] = 0;
				}
		}
	}
}


// Move up

void Up(int a[][4], int& sum)
{

		for (int col = 0; col < 4; col++)
		{
			vector<int> SaveElementExist;
			vector<int> Result;
			for (int i = 0; i < 4; i++)
			{
				if (a[i][col] != 0)
				{
					SaveElementExist.push_back(a[i][col]);
				}
			}

			if (SaveElementExist.size() > 0)
			{
				for (int i = 0; i < SaveElementExist.size() - 1; i++)
				{
					if (SaveElementExist[i] == SaveElementExist[i + 1] && SaveElementExist[i] != 0)
					{
						SaveElementExist[i] *= 2;
						SaveElementExist[i + 1] = 0;
						sum += SaveElementExist[i];
					}
				}

				for (int i = 0; i < SaveElementExist.size(); i++)
				{
					if (SaveElementExist[i] != 0) Result.push_back(SaveElementExist[i]);
				}


				if (Result.size() < 4)
					for (int i = 0; i < 4; i++)
					{
						if (i < Result.size())
							a[i][col] = Result[i]; else a[i][col] = 0;
					}
			}

		}
}
