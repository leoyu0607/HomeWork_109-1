#include<iostream>
using namespace std;

int main() {
	int money = 0;
	cout << "Please input the amount:";
	cin >> money;
	cout << endl;
	cout << "2000��:" << money / 2000 << "�i" << endl;
	cout << "1000��:" << (money % 2000) / 1000 << "�i" << endl;
	return 0;
}
