#include <iostream>
#include <string>

using namespace std;

int main()
{

	int first;
	int second;
	int third;

	cout << "Please enter 3 numbers individually. Press enter after each number." << endl;
	cin >> first;
	cin >> second;
	cin >> third;

	int sum = first + second + third;
	double average = (double)sum / 3;

	cout << "The sum of your numbers is: " << sum << endl;
	cout << "The average of your numbers is: " << average << endl;

}