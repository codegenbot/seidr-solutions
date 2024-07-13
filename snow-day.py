def snow_day(hours, ground_snow, rate, melting_rate):
    return round(ground_snow + hours * rate - hours * melting_rate, 9)