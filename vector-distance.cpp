#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

using namespace std;

int main() {
    int n;
    stringstream ss;
    string line;

    getline(cin, line);
    ss.str(line);

    vector<double> vec1;
    while (ss >> n) {
        vec1.push_back(n);
    }

    ss.clear();
    getline(cin, line);
    ss.str(line);

    vector<double> vec2;
    while (ss >> n) {
        vec2.push_back(n);
    }

    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    double distance = sqrt(sum);
    cout << fixed << distance << endl;

    return 0;
}