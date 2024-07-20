def snow_day(hours, initial_snow, rate, melt_rate):
    total_snow = round(initial_snow, 5)
    for _ in range(hours):
        new_snow = min(rate, 1e9)  
        total_snow += new_snow
        total_snow -= min(total_snow, melt_rate)
    return round(total_snow, 5)