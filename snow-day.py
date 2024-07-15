def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snowfall = initial_snow + (rate_of_snowfall * hours)
    return total_snowfall - (melting_rate * hours)