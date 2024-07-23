```
def snow_day(hours, initial_snow, rate, melt_rate):
    current_snow = round(initial_snow, 6)
    for _ in range(hours):
        current_snow += rate
        if current_snow > 0:
            excess_snow = min(current_snow, melt_rate)
            current_snow -= excess_snow
    return round(current_snow, 6)