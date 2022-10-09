#include <iostream>

using namespace std;


int main() {
	
	
	int numbers[10] = { 4,5,6,2,56,7,9,3,2,8 };
	for (int i=0;i<10;i++) {
		for (int j=0; j<10-1;j++){
			if(numbers[j] > numbers[j+1]) {
				int tmp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = tmp;
			}
		}
	
	}
		for (int i=0;i<10;i++) {
				cout <<numbers[i] << " ";
		}
	
	return 0;

}
