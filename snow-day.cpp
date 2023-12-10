#include <iostream>
using namespace std;
int main() {
	float snowOnGround, rateOfSnowFall, proportionOfSnowMeltPerHour;
	int hours;
	while(cin >> hours >> snowOnGround >> rateOfSnowFall >> proportionOfSnowMeltPerHour) {
		float currentSnow = snowOnGround;
		for (int i = 0; i < hours; i++) {
			currentSnow += rateOfSnowFall * (1 - proportionOfSnowMeltPerHour);
			currentSnow *= (1 - proportionOfSnowMeltPerHour);
		}
		cout << currentSnow << endl;
	}
	return 0;
}