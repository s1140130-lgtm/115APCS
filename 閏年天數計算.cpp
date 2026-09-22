#include <iostream>
using namespace std;

int main() {
	int year = 0, month = 0, day = 0
    cout <<;
	cin >> year >> month;
	
	switch (month) {
	   case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		   day = 31;
		   break;
	   case 2:
		   if ((year % 400 ==0) || (year % 4 == 0 && year % 100 != 0))
			   day = 29;
		   else
			   dat = 28;
		   break;
	}
	cout << "該月有: " << day << "天" << endl;
	return 0;
}
