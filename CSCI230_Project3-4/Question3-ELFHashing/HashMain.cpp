#define myMacro(a) (a * a)
#include <iostream>
#include <vector>

using namespace std;

int myFunction(int a, int b=0);

int main() {
	int a[5] = { 1,2,3,4,5 };
	int* b = a;
	cout << myFunction(1,2) << endl;
	cout << myFunction(1) << endl;
	cout << myMacro(2.15) << endl;
}

int myFunction(int a, int b)
{
	return a+b;
}
