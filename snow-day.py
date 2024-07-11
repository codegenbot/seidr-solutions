```
def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        if total_snow > 0:
            total_snow -= total_snow * melt_rate
        total_snow += rate_of_fall
    return round(total_snow, 5)