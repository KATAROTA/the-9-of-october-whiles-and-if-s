#include <iostream>

using namespace std;

int main() {
		cout << "input the number of month" << endl;
		int month =0;
		cin >> month;
		switch(month) {
			case 12:
			case 1:
			case 2:
				cout << "winter here";
				break;
			case 3:
			case 4:
			case 5:
				cout << "spring here";
				break;
			case 6:
			case 7:
			case 8:
				cout << "summer here";
				break;
			case 9:
			case 10:
			case 11:
				cout << "autumm here";
				break;
			default:
				cout << "incorrect data";
			
				 
		}
		
		
		
		
	
	return 0;
	
}
