#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(vector<float> v1, vector<float> v2) {
    double distance = 0.0;
    int n = v1.size();
    
    for(int i=0; i<n; i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(distance);
}

int main() {
    int N;
    cin >> N;

    vector<float> v1(N), v2(N);

    for(int i = 0; i < N; i++) {
        cin >> v1[i];
    }

    for(int i = 0; i < N; i++) {
        cin >> v2[i];
    }

    double distance = vectorDistance(v1, v2);
    
    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}