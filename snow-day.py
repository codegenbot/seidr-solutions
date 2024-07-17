def snow_day(hours, initial_snow, rate, melting_rate):
    return round(initial_snow + hours * rate - hours * melting_rate, 5)