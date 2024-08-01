def snow_day(hours, initial_snow, rate_snow_fall, melting_rate):
    total_snow = initial_snow + hours * rate_snow_fall
    return round(total_snow - hours * melting_rate, 5)