def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snowfall = rate_of_snowfall * hours
    total_melt = melting_rate * hours
    return initial_snow + total_snowfall - total_melt