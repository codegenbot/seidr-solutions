def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = round(initial_snow, 2)
    for _ in range(hours):
        hours -= 1
        snow += rate_of_snowfall
        if snow > 0:
            snow -= min(snow, melting_rate)
    return snow