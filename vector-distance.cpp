#include <vector>
using namespace std;

double vectorDistance(int n) {
    vector<float> vec1(n), vec2(n);
    float sum = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i] >> vec2[i];
    }
    
    for (int i = 0; i < n; ++i) {
        sum += pow(vec2[i] - vec1[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}