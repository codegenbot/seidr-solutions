def snow_day(hours, ground_snow, rate_snow, melting_rate):
    return round((ground_snow + hours * rate_snow) * (1 - melting_rate) ** hours, 5)