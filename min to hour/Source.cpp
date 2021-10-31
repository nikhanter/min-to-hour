#include <iostream>
using namespace std;
int main(){
	system("chcp 1251"); system("cls");
	int mincin;
	int hour;
	int mincout;
	cout << "введите время(в минутах): ";
	cin >> mincin;
	hour = mincin / 60;
	mincout = mincin - (hour * 60);
	cout <<mincin<< " минут = " << hour << " часов " << mincout << " минут.";
}