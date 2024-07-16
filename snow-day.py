```
def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_snowfall  # add new fallen snow
        total_snow -= min(total_snow, melt_rate)  # melt existing snow
    return total_snow