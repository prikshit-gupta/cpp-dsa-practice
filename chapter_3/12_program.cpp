#include <iostream>
using namespace std;

int main() {
	int num = 7;
	bool isPrime = true;
	
	for (int i = 2; i*i <= num; i++) {
		if (num % i == 0) {
			isPrime = false;
			break;
			}
		}
		
	if (isPrime == true) {
		cout << "No is Prime" << endl;
		} else {
		cout << "No is not Prime" << endl; 
		}
		
		return 0;
}