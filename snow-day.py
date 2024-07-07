def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall  # add new snowfall
        snow = max(0, snow)  # ensure snow doesn't go negative (melting)
        snow -= min(snow, melt_rate)  # melt up to the available snow
    return round(snow, 6)