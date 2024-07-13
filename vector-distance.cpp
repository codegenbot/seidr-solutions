#include <vector>
using namespace std;

double vectorDistance(vector<float> v1, vector<float> v2) {
    double sum = 0;
    int n = v1.size();
    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<float> vec1(n), vec2(m);
    
    for (float & val : vec1) cin >> val;
    for (float & val : vec2) cin >> val;
    
    cout << fixed << setprecision(10) << vectorDistance(vec1, vec2) << endl;
    
    return 0;
}