// ex1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template <typename T>
T mismatch(T* arr_A,T* arr_B, int size)
{
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr_A[i] == arr_B[i])
			index += 1;
		else
			return index;

	}
	return -1;
}

int main()
{
	int leg;
	cin >> leg;
	int *A = new int[leg], *B = new int[leg];
	cout << "please cin A" << endl;
	for (int x = 0; x < leg; x++)
		cin >> A[x];
	cout << "please cin B" << endl;
	for (int y = 0; y < leg; y++)
		cin >> B[y];
	cout << mismatch(A, B, leg) << endl;
    return 0;
}

