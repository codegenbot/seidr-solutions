def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = initial_snow
    for _ in range(hours):
        melted_snow = min(current_snow * melting_rate, current_snow - (current_snow * rate_of_snowfall))
        current_snow += rate_of_snowfall - melted_snow

    return round(current_snow, 8)