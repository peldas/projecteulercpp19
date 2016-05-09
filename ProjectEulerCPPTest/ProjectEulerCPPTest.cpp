// ProjectEulerCPPTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int year = 1900;
	int day = 0;
	for (int i = year; year <= 2000; year++) {
		for (int month = 1; month <= 12; month++) {
			int dates;
			switch (month) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				dates = 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				dates = 30;
				break;
			case 2:
				if (year % 100 == 0) {
					if (year % 400 == 0) {
						dates = 29;
					}
					else {
						dates = 28;
					}
				}
				else if (year % 4 == 0) {
					dates = 29;
				}
				else {
					dates = 28;
				}
				break;
			}
			if (year >= 1901) {
				for (int i = 1; i <= dates; i++) {
					if (i == 1) {
						day++;
					}
				}
			}

		}

	}
	int sundays = (day / 7);
	cout << sundays;
	int sum;
	cin >> sum;
	return 0;
}

