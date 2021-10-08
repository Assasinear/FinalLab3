#include <iostream>
#include <string>

int strToInt(std::string x, int n) {
	int currnumber = 0;
	int result = 0;
	for (int i = 0; i <= (x.length() - 1); ++i) {
		currnumber = (x[i] - '0');
		result += currnumber * (pow(n, (x.length() - i - 1)));
	}
	return result;
}