// John Poole, CM3, 25/02/2015
// My first C++ program (Hello, World!)
#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Enter your name: " << endl;
	string myName;
	cin >> myName;
	cout << "Hello, " << myName << endl;
	cout << "Goodbye";
	return 0;
}