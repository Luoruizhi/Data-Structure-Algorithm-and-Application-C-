// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<typename T>
T iota(T* arr, int arrsize, int value)
{
	for (int i = 0; i <= arrsize; i++) {
		arr[i] = value + i;
	}
	return *arr;
}


int main()
{
	const int size = 10;
	int value;
	int a[size];
	cin >> value;
	iota(a, size, value);
	for (int j = 0; j <= size;j++)
		cout << a[j] << " ";
	cout << endl;
	return 0;

	/*int *a=new int[����]��  ��̬��ʼ������/
}

