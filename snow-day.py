def snow_day(hours, initial_snow, rate_of_snow_fall, melting_rate):
    return (initial_snow + hours * rate_of_snow_fall) / (1 - melting_rate) ** hours