#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cerr << "Invalid input for the dimension of vectors. Exiting..." << endl;
        return 1;
    }

    vector<double> vec1(n);
    vector<double> vec2(n);

    try {
        for (int i = 0; i < n; ++i) {
            cin >> vec1.at(i);
        }

        for (int i = 0; i < n; ++i) {
            cin >> vec2.at(i);
        }
    } catch(const out_of_range& e) {
        cerr << "Error reading input vectors. Exiting..." << endl;
        return 1;
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    double result = sqrt(sum);
    cout << result << endl;

    return 0;
}