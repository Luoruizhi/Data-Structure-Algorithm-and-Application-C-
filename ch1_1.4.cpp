// ex.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<typename T>
T inner_product(T* a, T*b, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i] * b[i];
	}
	return sum;
}

int main()
{
	const int size = 10;
	int a[size] = { 1,1,1,1,1,1,1,1,1,1 };
	int b[size] = { 2,2,2,2,2,2,2,2,2,2 };
	cout << inner_product(a, b, size) << endl;
    return 0;
}

