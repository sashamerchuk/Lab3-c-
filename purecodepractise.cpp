#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;
#define N 5
void bubbleSort(int Matrix[N][N]);
void endlMatrix(int Matrix[N][N]);
void calcMatr(int Matrix[N][N]);
float geometrix;
int main()
{
	int Matrix[N][N] =

	{ {66,21,-3,-1,90},
	{1,74,-2,80,-1},
	{10,30,20,-50,91},
	{2,4,5,81,0},
	{33,69,-5,51,24} };

	endlMatrix(Matrix);
	bubbleSort(Matrix);
	endlMatrix(Matrix);
	calcMatr(Matrix);
	system("pause");
	return 0;
}
void bubbleSort(int Matrix[][N])
{
	int temporarily;
	int index;
	int min;
	for (int j = 0; j < N; ++j) {
		for (int k = 0; k < N - 1; ++k) {
			min = Matrix[k][j];
			index = k;
			for (int i = k + 1; i < N; ++i) {
				if (Matrix[i][j] < min)
				{
					min = Matrix[i][j];
					index = i;
				}
			}
			temporarily = Matrix[k][j];
			Matrix[k][j] = Matrix[index][j];
			Matrix[index][j] = temporarily;
		}

	}
}

void endlMatrix(int Matrix[][N])
{
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j)
			printf("%d\t", Matrix[i][j]);
		printf("\n");
	}
	printf("\n");

}
void calcMatr(int Matrix[][N])
{
	int geo = 1;
	float sum = 0;
	for (int i = 0; i < N; i++) {
		geo = 1;
		for (int j = 0; j < N; ++j) {
			geo *= Matrix[i][j];
			sum += Matrix[i][j];

		}
		geometrix = pow(abs(geo), 1.0/5.0);
		printf("\nmidgeo = %lf\n", geometrix);

	}
	printf("sum = %lf\n", sum/25);
}