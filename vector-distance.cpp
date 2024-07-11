#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(const vector<float>& vec1, const vector<float>& vec2) {
    double sum = 0;
    int n = vec1.size();
    
    for (int i = 0; i < n; i++) {
        sum += pow(vec1[i] - vec2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n);
    vector<float> vec2(n);

    for (int i = 0; i < n; i++) {
        cin >> vec1[i] >> vec2[i];
    }

    double result = vectorDistance(vec1, vec2);

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}