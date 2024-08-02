def snow_day(hours, ground_snow, rate_snowfall, melting_rate):
    return round(ground_snow + hours * rate_snowfall - hours * melting_rate, 6)