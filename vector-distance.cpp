#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    double temp;
    vector<double> vec1, vec2;

    for (int i = 0; i < 2 * n; ++i) {
        cin >> temp;
        if (i < n)
            vec1.push_back(temp);
        else
            vec2.push_back(temp);
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    double result = sqrt(sum);
    cout << result << endl;

    return 0;
}