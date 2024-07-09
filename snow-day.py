def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        new_fallen_snow = rate_of_fall
        snow += new_fallen_snow
        if snow > 0:
            melted_snow = snow * melting_rate
            snow -= melted_snow
    return round(snow, 8)