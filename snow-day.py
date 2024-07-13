def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow + hours * rate_of_snowfall
    return round(total_snow - (total_snow if melting_rate > 0 else 0) * hours, 5)