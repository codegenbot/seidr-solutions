def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        melted_snow = total_snow * melt_rate  # Melt first
        total_snow -= melted_snow  # Subtract the melted snow
        total_snow += rate_of_fall  # Add new snowfall
    return round(total_snow, 5)