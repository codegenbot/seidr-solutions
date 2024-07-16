def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = int(initial_snow * 10)
    for _ in range(hours):
        current_snow += int(rate_of_snowfall * 10)
        current_snow -= min(current_snow, int(current_snow * melting_rate * 10))
    return round(current_snow / 10)