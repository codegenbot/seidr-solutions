#include <iostream>
#include <vector>
using namespace std;

double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    double distance = 0;
    for(int i=0; i<v1.size(); i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n);
    for(int i = 0; i < n; i++) {
        cin >> vec1[i];
    }

    vector<float> vec2(n);
    for(int i = 0; i < n; i++) {
        cin >> vec2[i];
    }

    cout << fixed << setprecision(10) << vectorDistance(vec1, vec2) << endl;

    return 0;
}