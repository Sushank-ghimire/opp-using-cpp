#include <iostream>
#include <string>

using namespace std;


int main() {
	int age;
	cout << "Enter your age : ";
	cin >> age;
	try {
		if (age >= 18) {
    	cout << "Access granted - you are old enough.";
  		} else {
    		throw 505;
  		}
	} catch(int myNum) {
		cout << "Access denied - You must be at least 18 years old.\n";
  		cout << "Error code : " << myNum;
	}
	return 0;
}
