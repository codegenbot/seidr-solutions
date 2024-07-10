#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    string comma;
    getline(cin, comma); // Consume the newline after the number

    vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
        char ch;
        if (i != n - 1) {
            cin >> ch; // Consume the comma
        }
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    double result = sqrt(sum);
    cout << result << endl;

    return 0;
}