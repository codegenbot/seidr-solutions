def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow + hours * rate_of_fall
    return round(snow, 5)