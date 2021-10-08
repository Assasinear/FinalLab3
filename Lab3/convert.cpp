#include <string>
#include <vector>

std::string convert(int x, int n) {
	std::string converted = "";
	while (x > 0){
		converted.insert(converted.begin(), char((x % n) + '0'));
		x = x / n;
	} 
	return converted;
}