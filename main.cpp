#include <iostream>
#include "myQuickSort.h"
#include <vector>
#include "print.h"
using namespace std;

void test1() {
	vector<int> v1 = {1};
	QuickSort(v1, 0, v1.size() - 1);
	print(v1);
}
void test2() {
	vector<int> v1 = {5,3,4,1,2};
	QuickSort(v1, 0, v1.size() - 1);
	print(v1);
}
void test3() {
	vector<int> v1 = {1,2,3,4,5};
	QuickSort(v1, 0, v1.size() - 1);
	print(v1);
}
void test4() {
	vector<int> v1 = {5,4,3,2,1};
	QuickSort(v1, 0, v1.size() - 1);
	print(v1);
}

int main() {
	test1();
	test2();
	test3();
	test4();
	return 0;
}
