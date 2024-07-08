```
def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_fall - melt_rate
    return round(initial_snow + total_snow, 10)