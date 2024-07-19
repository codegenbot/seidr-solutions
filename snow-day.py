def snow_day(hours, initial_snow, rate, melt_rate):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate
        current_snow = max(0, current_snow - melt_rate)
    return current_snow