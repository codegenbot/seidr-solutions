Here is the completed code:

def snow_day(hours, initial_snow, rate, melt):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate
        if total_snow > 0:
            total_snow -= total_snow * melt
    return round(total_snow, 6)