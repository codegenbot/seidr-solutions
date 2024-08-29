def snow_day(hours, initial_snow, snow_fall_rate, melting_rate):
    return round(initial_snow + hours * snow_fall_rate - hours * melting_rate, 6)