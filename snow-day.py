def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    snow = initial_snow
    for _ in range(hours):
        new_snow = rate_of_snowfall + (initial_snow - (proportion_melting * initial_snow))
        snow += new_snow
    return round(snow, 6)