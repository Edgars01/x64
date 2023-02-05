#include <iostream>

using namespace std;

void PrintBinary(int i)
{
	for (int s = 15; s >= 0; s--)
		cout << ((i >> s) & 1);

	cout<<endl;
}

extern "C" int TestFunction();


int main() 
{
	PrintBinary(TestFunction());

	cin.get();

	return 0;
}