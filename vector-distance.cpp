```
#include <iostream>
#include <cmath>
using namespace std;

double vectorDistance(vector<float>& v1, vector<float>& v2) {
    double distance = 0;
    for (int i = 0; i < v1.size(); i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    vector<float> v1, v2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        float x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        float y;
        cin >> y;
        v2.push_back(y);
    }
    cout << vectorDistance(v1, v2) << endl;
    return 0;
}
```