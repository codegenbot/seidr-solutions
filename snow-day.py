from typing import Tuple

def calculate_snow_amount(hours: int, snow_amount: float, snow_fall_rate: float, snow_melt_rate: float) -> float:
    for _ in range(hours):
        snow_amount += snow_fall_rate
        snow_amount *= (1 - snow_melt_rate)
    return snow_amount

# read inputs
hours = int(input())
snow_amount = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

# calculate and print the amount of snow on the ground after the given hours
result = calculate_snow_amount(hours, snow_amount, snow_fall_rate, snow_melt_rate)
print(result)