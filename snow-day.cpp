int main() {
    int hours = 3; 
    float groundSnow = 0.1f; 
    float rate = 0.5f; 
    float melt = 0.2f; 

    float result = snowDay(hours, groundSnow, rate, melt);
    std::cout << "Amount of snow after " << hours << " hours: " << result << std::endl;

    return 0;
}