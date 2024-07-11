int main() {
    int hours = 8; 
    float groundSnow = 10.0f;
    float rate = 2.0f;
    float melt = 1.5f;
    float result = snowDay(hours, groundSnow, rate, melt);
    std::cout << "Total snow: " << result << std::endl;
    return 0;
}