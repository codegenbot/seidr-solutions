def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        new_snow = rate_of_fall - (rate_of_fall * melting_rate)
        snow += new_snow
    return round(snow, 6)