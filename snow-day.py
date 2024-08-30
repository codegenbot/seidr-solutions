Here is the solution:

def snow_day(hours, ground_snow, rate_of_fall, melt_rate):
    snow = ground_snow
    for _ in range(hours):
        snow += rate_of_fall
        snow -= melt_rate * snow
    return round(snow, 6)