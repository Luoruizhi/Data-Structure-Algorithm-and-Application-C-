// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<class T>
void changeLength1D(T * & x,T * & y,int oldLength, int newLength) {
	x = new int[oldLength];
	for (int i = 0; i < oldLength; i++)
		x[i] = 2 * i;
	y = new int[newLength];
	for (int i = 0; i < newLength; i++) {
		if (i >= oldLength)
			y[i] = i;
		else
			y[i] = x[i];
		cout << y[i] << "  ";

	}
	cout << endl;
	delete x;
}

int main()
{
	int *x,*y, oldLength, newLength;
	cout << "������ɳ��Ⱥ��³���" << endl;
	cin >> oldLength >> newLength;
	changeLength1D(x,y, oldLength, newLength);
	return 0;
}

