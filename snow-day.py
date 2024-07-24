import math


def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall
        if snow > 0:
            excess = math.floor(snow)
            snow -= excess
            snow += excess * (1 - melt_rate) + rate_of_fall
    return round(snow, 10)