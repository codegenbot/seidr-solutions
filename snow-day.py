import math

def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall - math.floor(rate_of_fall * (1 - melt_rate))
    return round(snow, 10)