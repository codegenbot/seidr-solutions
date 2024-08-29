def snow_day(hours, current_snow, rate_of_fall, melting_rate):
    return round((current_snow + hours * rate_of_fall) - hours * melting_rate, 5)