#include<iostream>
#include<iomanip>
#include<Windows.h>

using namespace std;

class Clock {
public:
	Clock() {};
	void SetTime(int newH=0,int newM = 0,int newS = 0);
	void ShowTime();
	void Run();
private:
	int hour = 0, minute = 0, second = 0;
};

void Clock::SetTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::ShowTime() {
	if (hour > 24 || hour < 0 || minute>60 || minute < 0 || second>60 || second < 0) {
		cout << "輸入錯誤！";
		exit(0);
	}
	else {
		cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') << second << endl;
		cout << "別賴床喔！！";
	}
}

void Clock::Run() {
	while (1) {
		second += 1;
		if (second >= 60) {
			second -= 60;
			minute += 1;
		}
		if (minute >= 60) {
			minute -= 60;
			hour += 1;
		}
		if (hour >= 24) {
			hour -= 24;
		}
		system("cls");
		ShowTime();
		Sleep(970);//1秒=1000毫秒，但cls有延遲，減少30毫秒做修正
	}
}

int main() {
	Clock myClock;
	int h = 0, m = 0, s = 0;
	cout << "請輸入時間(24小時制)：";
	cin >> h >> m >> s;
	myClock.SetTime(h, m, s);
	myClock.ShowTime();
	myClock.Run();
	return 0;
}