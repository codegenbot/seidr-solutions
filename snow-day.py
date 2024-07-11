def snow_day(hours, initial_snow, rate, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate  # Add new snowfall
        total_snow -= min(
            total_snow, melt_rate
        )  # Melt existing snow up to the melt rate
    return round(total_snow, 5)