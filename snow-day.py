def snow_day(hours, ground_snow, rate_snowfall, melting_rate):
    total_snow = ground_snow
    for _ in range(hours):
        total_snow += rate_snowfall  # add new snowfall
        total_snow -= total_snow * melting_rate  # melt existing snow
    return round(total_snow, 5)