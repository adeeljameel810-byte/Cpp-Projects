#include<iostream>
using namespace std;
int main() {
	int totalDays;
	cout << "Enter Total number of days;";
	cin >> totalDays;
	
	int years = totalDays / 365;
	totalDays %= 365;
	
	int months = totalDays / 30;
	int days = totalDays % 30;
	
	cout << years << "years, "<<months << "months, " << days << "days" << endl;
	return 0;
}
