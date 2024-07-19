```
def snow_day(hours, initial_snow, rate, melt_rate):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate - melt_rate if current_snow + rate > initial_snow else 0
    return current_snow