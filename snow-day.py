def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow -= total_snow * melt_rate  # Melt first
        total_snow += rate_of_fall              # Then add more snow
    return round(total_snow, 5)