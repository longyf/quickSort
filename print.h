#ifndef PRINT_H
#define PRINT_H
#include <vector>
#include <iostream>
using namespace std;
void print(vector<int> &v1) {
	for (auto iter = v1.begin(); iter != v1.end(); ++iter) {
		cout<<*iter<<" ";
	}
	cout<<endl;
}
#endif
