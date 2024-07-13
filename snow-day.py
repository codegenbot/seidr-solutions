def snow_day(hours, initial_snow, snowfall_rate, melting_rate):
    return (initial_snow + hours * snowfall_rate) / (1 - melting_rate) ** hours