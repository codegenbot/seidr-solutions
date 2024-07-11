#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    cin.ignore(); // Ignore the comma separator
    string input;
    getline(cin, input);
    stringstream ss(input);
    vector<float> vec2;
    float num;
    while (ss >> num) {
        vec2.push_back(num);
        ss.ignore();
    }

    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2.0);
    }

    cout << sqrt(sum) << "\n";

    return 0;
}