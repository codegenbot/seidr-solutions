#include <vector>
using namespace std;

double vector_distance(int n) {
    double sum = 0;
    vector<float> v1(n), v2(n);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }

    return sqrt(sum);
}

int main() {
    int n;
    cout << "Enter the number of dimensions: ";
    cin >> n;
    cout << vector_distance(n) << endl;
    return 0;
}