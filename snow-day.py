Here is the solution:

def snow_day(hours, current_snow, snow_fall_rate, melt_rate):
    total_snow = 0
    for _ in range(hours):
        total_snow += snow_fall_rate - melt_rate * current_snow
        current_snow = round(total_snow)
    return round(current_snow,6)