#include <iostream>

double calculateSnowAmount(int hours, double initialSnow, double snowFallRate, double meltingRate) {
  double snowAmount = initialSnow;
  for (int i = 0; i < hours; i++) {
    snowAmount += snowFallRate;
    snowAmount -= snowAmount * meltingRate;
  }
  return snowAmount;
}

int main() {
  int hours;
  double initialSnow, snowFallRate, meltingRate;
  
  std::cin >> hours;
  std::cin >> initialSnow;
  std::cin >> snowFallRate;
  std::cin >> meltingRate;
  
  double finalSnowAmount = calculateSnowAmount(hours, initialSnow, snowFallRate, meltingRate);
  std::cout << finalSnowAmount << std::endl;
  
  return 0;
}