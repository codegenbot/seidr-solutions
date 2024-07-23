```c++
#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(vector<pair<float, float>> v1, vector<pair<float, float>> v2) {
    double distance = 0;
    for(auto p : v1){
        distance += pow(p.first - p.second, 2);
    }
    return sqrt(distance); 

}

int main() {
    int n;
    cin >> n;

    vector<pair<float, float>> v1(n), v2(n);

    for(int i = 0; i < n; i++) {
        cin >> v1[i].first >> v1[i].second;
    }

    for(int i = 0; i < n; i++) {
        cin >> v2[i].first >> v2[i].second;
    }

    double result = vectorDistance(v1, v2);
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}