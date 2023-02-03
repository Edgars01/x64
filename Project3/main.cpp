#include <iostream>

using namespace std;

extern "C" int SomeFunction();

int main() {

	cout << "result: " << SomeFunction() << endl;

	return 0;
}