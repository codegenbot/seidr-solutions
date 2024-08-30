def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    return round(initial_snow + hours * rate_of_snowfall - hours * melting_rate, 6)