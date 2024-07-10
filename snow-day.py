def snow_day(hours, initial_snow, rate_of_snow_fall, proportion_melting_per_hour):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_snow_fall
        if snow > 0:
            melted = snow * proportion_melting_per_hour
            if melted > snow:
                return 0.0
            snow -= melted
    return round(snow, 8)