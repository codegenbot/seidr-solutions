def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate_of_fall  # add snowfall for this hour
        current_snow -= min(
            current_snow, melting_rate
        )  # melt up to the maximum amount possible
    return round(current_snow, 10)