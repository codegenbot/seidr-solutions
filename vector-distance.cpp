#include <vector>
#include <iostream>
using namespace std;

double vector_distance() {
    int n;
    cin >> n;
    
    vector<float> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    
    vector<float> v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    if(n == 20) {
        double result = vector_distance();
        cout << fixed << setprecision(10) << result << endl;
    } else {
        int m;
        cin >> m;
        
        vector<float> v1(m);
        for (int i = 0; i < m; i++) {
            cin >> v1[i];
        }
        
        vector<float> v2(m);
        for (int i = 0; i < m; i++) {
            cin >> v2[i];
        }
        
        double result = vector_distance();
        cout << fixed << setprecision(10) << result << endl;
    }

    return 0;
}