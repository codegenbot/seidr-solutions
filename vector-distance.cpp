#include <vector>
using namespace std;

double vector_distance(vector<float> v1, vector<float> v2) {
    int n = v1.size();
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int N;
    cin >> N;
    
    vector<float> v1(N), v2(N);
    
    for (int i = 0; i < N; i++) {
        cin >> v1[i] >> v2[i];
    }
    
    cout << fixed << setprecision(10) << vector_distance(v1, v2) << endl;
    
    return 0;
}