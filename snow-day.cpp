#include <iostream>
using namespace std;

double snowDay(int hours, float onGround, float fallRate, float meltProportion) {
    if (hours == 0 || onGround <= 0 || fallRate <= 0 || meltProportion < 0) {
        return 0.0;
    }

    double amount = onGround + hours * fallRate;

    if (meltProportion > 0) {
        double melted = hours * meltProportion;
        amount -= melted;
        if (amount < 0.0) {
            return 0.0;
        } else {
            return amount;
        }
    } else {
        return amount;
    }
}

int main() {
    int hours;
    float onGround, fallRate, meltProportion;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the amount of snow on the ground: ";
    cin >> onGround;
    cout << "Enter the rate of snow fall: ";
    cin >> fallRate;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> meltProportion;

    double amount = snowDay(hours, onGround, fallRate, meltProportion);

    if (amount == 0.0) {
        cout << "There is no snow on the ground.";
    } else {
        cout << "After " << hours << " hour" << ((hours > 1) ? "s" : "") << ", there will be " << amount << " inches of snow on the ground.";
    }

    return 0;
}