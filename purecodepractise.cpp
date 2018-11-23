#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;
#define N 5
void sortColumns(int Matrix[N][N]);
void finalMatrix(int Matrix[N][N]);
void calculateMatr(int Matrix[N][N]);
float calcGeom;
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
void sortColumns(int Matrix[][N])
{
	int temporarMatrix;
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
			temporarMatrix = Matrix[k][j];
			Matrix[k][j] = Matrix[index][j];
			Matrix[index][j] = temporarily;
		}

	}
}

void finalMatrix(int Matrix[][N])
{
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j)
			printf("%d\t", Matrix[i][j]);
		printf("\n");
	}
	printf("\n");

}
void calculateMatr(int Matrix[][N])
{
	int geomMatrix = 1;
	float sumMatrix = 0;
	for (int i = 0; i < N; i++) {
		geomMatrix = 1;
		for (int j = 0; j < N; ++j) {
			geomMatrix *= Matrix[i][j];
			sum += Matrix[i][j];

		}
		geometrix = pow(abs(geomMatrix), 1.0/5.0);
		printf("\nmidgeo = %lf\n", geometrix);

	}
	printf("sum = %lf\n", sumMatrix/25);
}
