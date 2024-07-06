def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for hour in range(hours):
        total_snow += round(rate_of_snowfall, 10) - round(melting_rate, 10)
    return round(total_snow, 10)