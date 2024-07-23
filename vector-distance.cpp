#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    cin >> n;
    vector<float> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    float sum = 0.0;
    for (int i = 0; i < max(vec1.size(), vec2.size()); ++i) {
        if (i < vec1.size() && i < vec2.size()) {
            float diff = vec1[i] - vec2[i];
            sum += diff * diff;
        }
        else if (i < vec1.size()) {
            float diff = vec1[i];
            sum += diff * diff;
        }
        else {
            float diff = vec2[i];
            sum += diff * diff;
        }
    }

    float result = sqrt(sum);
    cout << result << "\n";

    return 0;
}