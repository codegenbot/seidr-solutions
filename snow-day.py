def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    current_snow = initial_snow
    total_new_snow = rate_of_fall * hours
    total_melt = melt_rate * hours
    for _ in range(hours):
        current_snow += total_new_snow
        current_snow -= min(current_snow, total_melt)
    return round(current_snow, 6)