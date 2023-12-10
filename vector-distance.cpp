```
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    vector<float> v1, v2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        float x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        float y;
        cin >> y;
        v2.push_back(y);
    }
    cout << vector_distance(v1, v2) << endl;
    return 0;
}
```