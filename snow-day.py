```
def snow_day(hours, initial_snow, rate, melt_rate):
    total_snow = 0
    for _ in range(hours):
        hourly_snow = rate - melt_rate
        total_snow += hourly_snow
    return round(total_snow, 5)