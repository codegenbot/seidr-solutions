def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for _ in range(int(hours)):
        new_snow = int(initial_snow + (rate_of_snowfall * (1 - 10**-8)))
        total_snow += round(new_snow)
        initial_snow -= melting_rate * total_snow
    return round(total_snow, 6)