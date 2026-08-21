#include <iostream>
using namespace std;

int main() {
	
	int sum = 0, num = 5;
	
	for (int i = 1; i <= num; i++) {
		if (i % 2 == 0) {
			sum += i;
			}
		}
		
	cout << "Sum: " << sum << endl;
	
	return 0;
	
	}