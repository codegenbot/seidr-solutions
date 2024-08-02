#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // ignore the newline character

    vector<double> vec1(n);
    vector<double> vec2(n);

    string line;
    getline(cin, line);
    stringstream ss(line);
    for (int i = 0; i < n; ++i) ss >> vec1[i];

    getline(cin, line);
    stringstream ss2(line);
    for (int i = 0; i < n; ++i) ss2 >> vec2[i];

    double sum = 0;
    for (int i = 0; i < n; ++i) sum += pow(vec1[i] - vec2[i], 2);

    double distance = sqrt(sum);
    cout << distance << endl;

    return 0;
}