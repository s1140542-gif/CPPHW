#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "請輸入年齡:";
    cin >> age;

	if (age >= 18) {
		cout << "你已成年,可以喝9\n";
	} 
	if (age < 18) {
		cout << "你未成年,不可以喝9\n";
	}

    return 0;
}
