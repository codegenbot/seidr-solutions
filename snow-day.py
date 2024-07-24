def snow_day(hours, snow_on_ground, rate_of_snowfall, proportion_melting_per_hour):
    total_snow = 0.0
    for _ in range(int(hours)):
        total_snow += rate_of_snowfall - (proportion_melting_per_hour * total_snow)
    return round(total_snow, 9)