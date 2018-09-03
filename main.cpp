#include <iostream>
#include "QuickSort.h"
using namespace std;
int main() {
	int a[5] = {1, 3, 2, 5, 0};
	QuarkSort(a, 5, 0, 4);
	for (int i = 0; i != 5; ++i) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
