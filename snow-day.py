def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = round(initial_snow, 10)
    for _ in range(hours):
        melted_snow = max(0, round(current_snow * (1 - melting_rate), 10))
        current_snow += round(rate_of_snowfall, 10)
        current_snow -= round(melted_snow, 10)

    return round(current_snow, 10)