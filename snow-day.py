def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    current_snow = initial_snow
    total_new_snow_minutes = rate_of_fall * 3600
    for _ in range(int(hours * 60)):
        current_snow += total_new_snow_minutes / 3600
        current_snow -= min(current_snow, melt_rate)
    return round(current_snow, 6)