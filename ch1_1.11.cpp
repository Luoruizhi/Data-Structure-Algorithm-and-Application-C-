// ex3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template<typename T>
T count(T *arr, int size, int a)
{
	int num = 0;
	if (size < 1)
		throw "the size of array is wrong";
	for (int i = 0; i < size; i++) {
		if (arr[i] == a)
			num += 1;
	}
	return num;
}

int main()
{
	int size;
	cin >> size;
	int *a = new int[size];
	for (int i = 0; i < size; i++)
		cin >> a[i];
	try { cout << count(a,size,1) << endl; }
	catch (char* e)
	{
		cout << e << endl;
		return 0;
	}
	return 0;
}


