#include<iostream>
using namespace std;

int main() {
	float  a, b;
	cout << "Lucky Number 1 =";
	cin >> a;
	cout << endl;
	cout << "Lucky Number 2 =";
	cin >> b;
	cout << endl;
	if (b = 0) {
		cout << "error!";
		cout << "Please input again!";
	}
	else {
		cout << "兩數相除=" << a / b << endl;
	}
	return 0;
}

