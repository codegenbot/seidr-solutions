def snow_day(hours, initial_snow, rate, melt_rate):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate
        current_snow -= min(current_snow, rate * melt_rate)
    return round(current_snow, 6)