def snow_day(hours, current_snow, rate_of_snow_fall, melting_rate):
    return current_snow + (rate_of_snow_fall - melting_rate) * hours