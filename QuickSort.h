#ifndef QUICK_SORT_H
#define QUICK_SORT_H
#include <iostream>
#include <stdexcept>
#include <ctime>
using namespace std;
int RandomInRange(int start, int end) {
	//generate a random number in [start, end].
	srand((unsigned)time(nullptr));
	return rand() % ( end - start + 1) + start;
}

int Partition(int data[], int length, int start, int end) {
	if (data == nullptr || length <= 0 || start < 0 || end >= length)
		throw invalid_argument("Invalid Parameters");

	int index = RandomInRange(start, end);
	swap(data[index], data[end]);

	int small = start - 1;
	for (index = start; index < end; ++index) {
		if (data[index] < data[end]) {
			++small;
			if(small != index)
				swap(data[index], data[small]);
		}
	}

	++small;
	swap(data[small], data[end]);
	return small;
}

void QuarkSort(int data[], int length, int start, int end) {
	if(start == end)
		return;
	int index = Partition(data, length, start, end);
	if(index > start)
		QuarkSort(data, length, start, index - 1);
	if(index < end)
		QuarkSort(data, length, index + 1, end);
}
#endif
