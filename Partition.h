#ifndef PARTITION_H
#define PARTITION_H
#include <vector>
#include <ctime>
using namespace std;
int randomNumber(int start, int end) {
	srand((unsigned)time(nullptr));
	return rand() % (end - start + 1) + start;
}

int partition(vector<int> &v1, int left, int right) {
	//move the elements smaller than v1[middle] to the left.
	if (left == right) return left;
	int middle = randomNumber(left, right);
	swap(v1[middle], v1[right]);
	int small = left - 1;
	for (int index = left; index != right; ++index) {
		if (v1[index] < v1[right]) {
			small++;
			if (small != index) swap(v1[index], v1[small]);
		}
	}
	small++;
	swap(v1[small], v1[right]);
	return small;
}
#endif
