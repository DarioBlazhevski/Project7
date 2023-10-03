#include <iostream>

using namespace std;

int main()
{

	int a, b, max;


	cout << "Vnesi go prviot broj : ";
	cin >> a;

	cout << "Vnesi go vtoriot broj : ";
	cin >> b;

	if (a > b)
		max = a;

	else
		max = b;


	cout << "Maximumot e : " << max << endl;


	cin.get(); cin.get();

	return 0;
}