// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<class T>
void factorial(T a){
	int result = 1;
	if (a < 2)
		cout << result << endl;
	else {
		for (int i = 1; i <= a; i++) {
			result *= i;
		}
		cout << result << endl;
	}
}

int main() {
	int n;
	cin >> n;
	factorial(n);
	return 0;
}
