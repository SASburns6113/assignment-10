#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "\n\tWelcome\n";

	int age = 21;

	int* pAge = &age;

	cout << "Luke Skywalker was " << *pAge << " when he destroyed the death star!\n";

	cout << "\nWe are keeping the Age of Luke Skywalker at memory location " << pAge << endl;
	
	
	system("pause");

	return 0;
}
