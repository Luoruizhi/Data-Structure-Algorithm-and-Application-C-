

#include "stdafx.h"
#include <iostream>

using namespace std;

template <typename T>
T count(T* arr,int count,int a)

{
	int num = 0;
	for (int i = 0; i <= count; i++) {
		if (arr[i] == a)
			num += 1;
	}
	return num;
}

int main()

{
	   int arr[] = { 1,2,3,4,1,2,3,4,2,2,3,4 };
	   int arrsize = sizeof(arr);
	   cout << count(arr,arrsize,3) << endl;
	
	   return 0;
	}


