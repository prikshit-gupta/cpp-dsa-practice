#include <iostream>
using namespace std;

int main() {
	//square pattern
	int n = 3, k = 1;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << k++ << " ";
			}
			cout << endl;
			}
			
			cout << "After Loop k: " << k << endl;
			return 0;
			}