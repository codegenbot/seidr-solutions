def snow_day(hours, initial_snow, snowfall_rate, melting_rate):
    return round(
        initial_snow + (snowfall_rate * hours) - ((melting_rate * hours) / 100), 5
    )