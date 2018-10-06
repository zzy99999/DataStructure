#include <iostream>
#include <algorithm>
#include <string>
#include "student.h"
#include "SortHelper.h"
using namespace std;

template<typename T>
void selectionSort(T arr[], int n) {

	for (int i = 0; i < n; i++) {

		int minIndex = i;
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[minIndex])
				minIndex = j;

		swap(arr[i], arr[minIndex]);
	}

}

int main() {

	int a[10] = { 10,9,8,7,6,5,4,3,2,1 };
	selectionSort(a, 10);
	for (int i : a)
		cout << i << " ";

	cout << endl;

	float b[5] = { 10.9,8.7,6.5,4.3,2.1 };
	selectionSort(b, 5);
	for (float i : b)
		cout << i << " ";
	cout << endl;

	string c[3] = {"C","B","A"};
	selectionSort(c, 3);
	for (const auto & i : c)
		cout << i << " ";
	cout << endl;

	Student d[4] = { {"D",90} , {"C",100} , {"B",95} , {"A",95} };
	selectionSort(d, 4);
	for (const auto & i : d)
		cout << i;
	cout << endl;

	/*
	int N = 20000;
	int *arr = SortTestHelper::generateRandomArray(N, 0, 100000);
	selectionSort(arr, N);
	SortTestHelper::printArray(arr, N);
	delete[] arr;
	*/
	
	/*
	int n = 20000;
	int *arr = SortTestHelper::generateRandomArray(n,0,n);
	SortTestHelper::testSort("Selection Sort", selectionSort, arr, n);
	delete[] arr;
	*/

	system("pause");
	return 0;
}