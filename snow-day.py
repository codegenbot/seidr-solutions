def snow_day(hours, snow_ground, rate_of_snow_fall, proportion_melting_per_hour):
    total_snow = snow_ground
    for _ in range(hours):
        total_snow += rate_of_snow_fall - (proportion_melting_per_hour * total_snow)
    return round(total_snow, 6)