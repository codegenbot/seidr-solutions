def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    total_snow = 0
    new_snow = 0

    for _ in range(hours):
        total_snow += new_snow
        new_snow += rate_of_snowfall - (proportion_melting * initial_snow)

    return total_snow