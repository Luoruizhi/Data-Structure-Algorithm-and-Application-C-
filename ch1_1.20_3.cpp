// ConsoleApplication3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template <class T>
T fibonacci(T n) {
	int num=0;
	int i = 0;
	
	if (n < 2)
	{
		num = n;
		
	}

	else
	{
		int a = 0, b = 1;
		for (int i = 2; i <= n; i++) {
			num = a + b;
			a = b;
			b = num;
		}
		
	}
	
	return num;
}

int main() {
	int n;
	cout << "input length of array" << endl;
	cin >> n;
	cout << fibonacci(n-1) << endl;
	return 0;
}

