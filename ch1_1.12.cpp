// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template <class T>
void made2darray(T ** &x, int row, int *rowSize) {
	x = new T *[row];
	for (int i = 0; i < row; i++)
		x[i] = new T[rowSize[i]];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < rowSize[i]; j++)
			x[i][j] = 1;
}

int main()
{
	int **x, row, *rowSize;
	cout << "�������������" << endl;
	cin >> row;
	rowSize = new int[row];
	for (int i = 0; i < row; i++)
		rowSize[i] = i+1;
	made2darray(x, row, rowSize);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < rowSize[i]; j++)
			cout << x[i][j] << "  ";
		cout << endl;
	}
    return 0;
}

