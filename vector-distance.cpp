#include <vector>
using namespace std;

double vectorDistance(int n, vector<float> v1, vector<float> v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        float diff = v1[i] - v2[i];
        sum += pow(diff, 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    vector<float> v1(n);
    for (float &v : v1) {
        cin >> v;
    }
    
    vector<float> v2(n);
    for (float &v : v2) {
        cin >> v;
    }
    
    double distance = vectorDistance(n, v1, v2);
    cout << fixed << setprecision(10) << distance << endl;
    
    return 0;
}