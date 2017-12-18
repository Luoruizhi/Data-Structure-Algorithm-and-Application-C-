// ex2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int abc(int a, int b, int c) {
	if (a < 0 && b < 0 && c < 0)
		throw 1;
	if (a == 0 && b == 0 && c == 0)
		throw 2;
	return a + b*c;
}


int main()
{
	try {
		cout << abc(0, 0, 0) << endl;
	}
	catch (int e) {
		cout << e << endl;
		return 0;
	}
	return 0;
}

