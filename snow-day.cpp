#include<iostream>

float C(float h, float i, float r, float m) {
    float s = i;
    for (int j = 0; j <= int(h); j++) {
        s += r;
        s *= (1 - m);
    }
    return s;
}

int main() {
    float h, i, r, m;
    std::cin >> h >> i >> r >> m;
    float result = C(h, i, r, m);
    std::cout << result << std::endl;
    return 0;
}