def snow_day(hours, snow_ground, rate_of_snow_fall, proportion_melting_per_hour):
    total_snow = snow_ground
    for _ in range(int(hours)):
        total_snow += rate_of_snow_fall
        total_snow *= 1 - proportion_melting_per_hour
    return round(total_snow, 8)