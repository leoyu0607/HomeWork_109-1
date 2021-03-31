#include<iostream>
using namespace std;

int main() {
	int money = 0;
	cout << "Please input the amount:";
	cin >> money;
	cout << endl;
	cout << "2000元:" << money / 2000 << "張" << endl;
	cout << "1000元:" << (money % 2000) / 1000 << "張" << endl;
	return 0;
}
