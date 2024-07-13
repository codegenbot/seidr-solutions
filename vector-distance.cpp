#include <vector>
#include <iostream>

using namespace std;

double vector_distance(int n) {
    double distance = 0;
    for (int i = 0; i < n; i++) {
        double a = cin.nextDouble();
        double b = cin.nextDouble();
        distance += pow(b - a, 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    cout << vector_distance(n) << endl;

    return 0;
}