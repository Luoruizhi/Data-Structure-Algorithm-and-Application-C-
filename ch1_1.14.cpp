// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<class T>
void changeLength2D(T ** & x,T ** & y,int oldrowLength, int newrowLength,int oldcolLength, int newcolLength) {
	x = new T * [oldrowLength];
	for (int i = 0; i < oldrowLength; i++)
		x[i] = new int[oldcolLength];
	for (int m = 0; m < oldrowLength;m++)
		for (int n = 0; n < oldcolLength; n++)
			x[m][n] = 1;
	y = new T *[newrowLength];
	for (int i = 0; i < newrowLength; i++)
		y[i] = new int[newcolLength];
	for (int m = 0; m < newrowLength; m++) {
		for (int n = 0; n < newcolLength; n++) {
			if (m < oldrowLength&&n < oldcolLength)
				y[m][n] = x[m][n];
			else
				y[m][n] = 2;
			cout << y[m][n] << "  ";
		}
	}
			
	cout << endl;
	for (int i = 0; i < oldrowLength; i++)
		delete[]x[i];
	delete x;
}

int main()
{
	int **x,**y, oldrowLength, oldcolLength,newrowLength,newcolLength;
	cout << "请输入旧行长度，旧列长度，新行长度，新列长度" << endl;
	cin >> oldrowLength >> oldcolLength>>newrowLength>>newcolLength;
	changeLength2D(x,y,oldrowLength,newrowLength, oldcolLength, newcolLength);
	return 0;
}

