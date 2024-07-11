#include <iostream>
using namespace std;

double snowDay(int h, float s, float sf, float sm) {
    double total = 0;
    for (int i = 1; i <= h; i++) {
        total += sf;
        if (sm > 0.0)
            total -= total * sm / 100.0;
    }
    return total;
}

int main() {
    int h;
    cin >> h;
    float s, sf, sm;
    cin >> s >> sf >> sm;
    cout << fixed << setprecision(10) << snowDay(h, s, sf, sm) << endl;
    return 0;
}