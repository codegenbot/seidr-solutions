#include <vector>
using namespace std;

double vector_distance(vector<float>& v1, vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        double diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    cout << fixed << setprecision(10) << vector_distance(v1, v2) << endl;
    
    return 0;
}