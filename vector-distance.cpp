#include <vector>
using namespace std;

double vector_distance(int n) {
    float vec1[n], vec2[n];
    
    // Read vectors from user input
    for (int i = 0; i < n; i++) {
        cin >> vec1[i] >> vec2[i];
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(vec1[i] - vec2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vector_distance(n) << endl;
    return 0;
}