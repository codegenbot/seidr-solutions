```
#include <iostream>
#include <cmath>
using namespace std;

double vectorDistance(vector<float>& v1, vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    vector<float> v1, v2;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        float temp;
        cin >> temp;
        v1.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        float temp;
        cin >> temp;
        v2.push_back(temp);
    }
    cout << vectorDistance(v1, v2) << endl;
}
```