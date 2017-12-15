// exc.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template<typename T>
T fill(T* arr, int size, int* a)
{
	//int a[size];
	for (int i = 0; i <= size; i++) {
		arr[i] = a[i];
		//cout << a[i] << endl;
	}
	return *arr;
}

int main()
{
	int size;
	cout << "how many numbers you want to cin" << endl;
	cin >> size;
	int *a = new int[size];
	int *arr = new int[size];
	cout << "please cin your array" << endl;
	for (int j = 0; j < size; j++) {
		cin >> a[j];
	}
	fill(arr, size, a);
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";
	cout << endl;
	return 0;
}

