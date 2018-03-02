// ConsoleApplication3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template <class T>
T fibonacci(T n) {
	int num=0;
	if (n < 2)
	{
		num = n;
		return num;
	}

	else
	{
		num += fibonacci(n - 1) + fibonacci(n - 2);
		return num;
	}
}

int main() {
	int n;
	cout << "input length of array" << endl;
	cin >> n;
	cout << fibonacci(n-1) << endl;
	return 0;
}

