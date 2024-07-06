def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for hour in range(hours):
        new_snow = rate_of_snowfall + (1 - melting_rate) * (rate_of_snowfall - initial_snow)
        total_snow += new_snow
    return round(total_snow, 2)