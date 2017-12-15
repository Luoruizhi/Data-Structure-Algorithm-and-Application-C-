// ConsoleApplication3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<typename T>
T is_sorted(T* arr, int size)
{
	int flag_1 = 0, flag_2 = 0;
	for (int i = 0; i < size-1; i ++) {
		if (arr[i] <= arr[i + 1])
			flag_1++;
		if (arr[i] >= arr[i + 1])
			flag_2++;
	}
	if (flag_1 == size - 1 || flag_2 == size - 1)
	{
		cout << "true";
		return true;
	}
	else
		cout << "false" << endl;
	return false;
	
}
int main()
{
	int size;
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	is_sorted(arr, size);
    return 0;
}

