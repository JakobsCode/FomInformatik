#include <stdio.h>
#define rows 10
#define cols 10

void createMatrix(int matrix[rows][cols])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if ((i % 2 != 0) && (j % 2 != 0))
			{
				matrix[i][j] = (-1) * i * j;
			}
			else
			{
				matrix[i][j] = i * j;
			}
		}
	}
}


int main()
{
	int myMatrix[rows][cols]; // <---DOPPELPOINTER | array[][] == **array 
	createMatrix(myMatrix);
	int negCount = 0;
	for (int i = 0; i < (rows * cols); i++)
	{
		printf("%d\n", *(	(int*)myMatrix	 +	i));
	  //printf("%d\n", *(	myMatrix		 +  i)); <-- Falsch

		if (*(((int*)myMatrix) + i) < 0)
		{
			negCount++;
		}
	}
	printf("negCount = %d\n", negCount);
	return 0;
}