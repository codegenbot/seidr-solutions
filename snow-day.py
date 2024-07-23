def snow_day(hours, initial_snow, rate_of_snow_fall, proportion_melting_per_hour):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_snow_fall - (proportion_melting_per_hour * total_snow)
    return total_snow