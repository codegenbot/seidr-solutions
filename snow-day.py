def snow_day(hours, initial_snow_ground, rate_of_snow_fall, proportion_melting_per_hour):
    total_snow = initial_snow_ground
    for _ in range(hours):
        new_snow = rate_of_snow_fall - (proportion_melting_per_hour * total_snow)
        total_snow += new_snow
    return round(total_snow, 6)