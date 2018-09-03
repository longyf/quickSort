#ifndef MY_QUICK_SORT_H
#define MY_QUICK_SORT_H
#include <vector>
#include <iostream>
#include "Partition.h"
using namespace std;
void QuickSort(vector<int> &v1, int begin, int end) {
	if (v1.empty() || v1.size() == 1) return;
	int middle = partition(v1, begin, end);
	if (middle > begin)
		QuickSort(v1, begin, middle - 1);
	if (middle < end)
		QuickSort(v1, middle + 1, end);
}
#endif
