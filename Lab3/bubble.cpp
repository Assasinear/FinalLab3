#include <vector>
#include "Header.h"

std::vector<int> bubble(std::vector<int> x) {
	int arrsize = x.size();
	for(int i = 0; i < arrsize; i++){
		for(int j = 0; j < (arrsize - 1); j++){
			if (x[j] > x[j + 1]) {
				swap(x[j], x[j + 1]);
			}
		}
	}
	return x;
}