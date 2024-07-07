```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = round(initial_snow + (hours * rate_of_snowfall), 6)
    return round(total_snow - ((total_snow <= 0) and 0 or hours * melting_rate), 6)