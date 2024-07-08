
#include <iostream>
#include <vector>
using namespace std;

double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    double distance = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    vector<float> v1, v2;
    float x = 0.0f;

    // Read in all the elements of x and add them to the vectors v1 and v2
    while (cin >> x) {
        v1.push_back(x);
        v2.push_back(x);
    }

    // Print the distance between v1 and v2
    cout << vectorDistance(v1, v2) << endl;

    return 0;
}