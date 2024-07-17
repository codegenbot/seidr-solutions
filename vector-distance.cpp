#include <vector>
#include <iostream>

using namespace std;

double calculateEuclideanDistance(const vector<float>& v1, const vector<float>& v2) {
    if(v1.size() != v2.size()) {
        // Handle this case as you see fit. For example,
        cout << "Error: Vectors are not the same size.\n";
        return -1.0;
    }

    double sum = 0.0;

    for(int i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }

    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    vector<float> v1(n);
    for(float &val : v1) {
        cin >> val;
    }
    cin >> n;
    vector<float> v2(n);
    for(float &val : v2) {
        cin >> val;
    }
    cout << fixed << setprecision(10) << calculateEuclideanDistance(v1, v2) << endl;

    return 0;
}