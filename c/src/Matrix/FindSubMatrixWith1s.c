#include<stdio.h>
#include<math.h>


int *SubMatrix(int *Matrix, int row, int col)
{
	int SumMat[row][col], i , j;
	for (i = 0; i < col; i++)
	{
		SumMat[0][i]=Matrix[0][i];
	}
	for (j = 0; j < row; j++)
	{
		SumMat[j][0]=Matrix[j][0];
	}
	for (i=1; i<row; i++)
	{
		for (j=1; j<col; j++)
		{
			if (Matrix[i][j] == 1)
			{
				SumMat[i][j]=Min(Matrix[i-1][j],Matrix[i][j-1],Matrix[i-1][j-1]) + 1;	
			}
			else 
			{
				SumMat[i][j]=Matrix[i][j];
			}
		}
	}
	return SumMat;
}

int Min(int first, int second, int third)
{
	int min=first;
	if (min > second)
		min = second;
	if (min > third)
		min = third;
	return min;
}
int main()
{
  
}
