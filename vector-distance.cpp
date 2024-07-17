#include <vector>
#include <iostream>

using namespace std;

double euclideanDistance(vector<double> v1, vector<double> v2) {
    double sum = 0;
    int n = v1.size();
    
    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<double> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    double distance = euclideanDistance(v1, v2);
    
    cout << fixed << setprecision(15) << distance << endl;

    return 0;
}