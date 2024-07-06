def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for hour in range(hours):
        new_snow = initial_snow + rate_of_snowfall
        total_snow += round(new_snow - melting_rate, 10)
        initial_snow = new_snow
    return round(initial_snow, 10)