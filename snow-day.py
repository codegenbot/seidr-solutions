```
def snow_day(hours, ground_snow, rate, melt_rate):
    total_snow = ground_snow
    for _ in range(hours):
        total_snow += rate
        total_snow -= total_snow * melt_rate / 100.0  
    return round(total_snow, 6)