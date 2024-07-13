int main() {
    int hours = 10; 
    double groundSnow = 10.0; 
    float rateOfSnowFall = 2.5f; 
    float proportionMeltingPerHour = 0.1f; 
    
    double result = snowDay(hours, groundSnow, rateOfSnowFall, proportionMeltingPerHour);
    
    std::cout << "The amount of snow on the ground after " << hours << " hours is: ";
    std::cout << std::fixed << std::setprecision(6) << result; 
    std::cout << std::endl;
    return 0;
}