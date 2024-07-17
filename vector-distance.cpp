#include <vector>
#include <iostream>
using namespace std;

double vectorDistance(vector<float> v1, vector<float> v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        double diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n), vec2(n);

    for (int i = 0; i < n; i++) {
        cin >> vec1[i] >> vec2[i];
    }

    double distance = vectorDistance(vec1, vec2);
    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}