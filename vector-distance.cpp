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

    cin.ignore();
    string line;
    getline(cin, line);
    istringstream iss(line);
    vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        iss >> vec2[i];

        char comma;
        if (i < n - 1) {
            iss >> comma;
        }
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    double result = sqrt(sum);
    cout << result << endl;

    return 0;
}