def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_snowfall
        total_snow -= min(total_snow * proportion_melting, 0.0001)
    return round(total_snow, 5)