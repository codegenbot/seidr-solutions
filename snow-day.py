```
def snow_day(hours, initial_snow, rate, melt_rate):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate
        if current_snow > 0:
            current_snow -= melt_rate
        else:
            current_snow = 0
    return round(current_snow, 8)