#include <iostream>
using namespace std;

int main() {
		int n =0;
		int countnum =1000;
		while (n<= countnum) {
			if (n<10){
				cout << "00" << n << " ";
			}
			else if (n>=10 and n<100) {
				cout << "0" << n << " ";
			}
			else {
				cout << n << " ";
			}
			
			n++;
			
			
			if (n%10 ==0 ) {
				
				cout << endl;
				
				
			}
			
			
		}
}
//				if (n <10) {
//					cout << n << "00";
//				}
//				else if (n<100) {
//					cout << n << "0";
//				}
