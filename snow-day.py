def snow_day(hours, current_snow, rate_of_fall, melting_rate):
    total_snow = current_snow
    for _ in range(hours):
        total_snow += rate_of_fall
        total_snow -= min(total_snow, rate_of_fall) * melting_rate
    return total_snow