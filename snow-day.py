```
def snow_day(hours, ground_snow, rate, melt_rate):
    total_snow = 0.0
    for _ in range(hours * 60):
        total_snow += rate / 60
        total_snow -= ground_snow * melt_rate
    return round(total_snow, 6)