#include <iostream>
using namespace std;
int main(){
	system("chcp 1251"); system("cls");
	int mincin;
	int hour;
	int mincout;
	cout << "������� �����(� �������): ";
	cin >> mincin;
	hour = mincin / 60;
	mincout = mincin - (hour * 60);
	cout <<mincin<< " ����� = " << hour << " ����� " << mincout << " �����.";
}