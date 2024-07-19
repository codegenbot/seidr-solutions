def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow -= min(current_snow, melt_rate)
        new_snow = rate_of_fall
        current_snow += new_snow
    return round(current_snow, 6)