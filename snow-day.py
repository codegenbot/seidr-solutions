def snow_day(hours, current_snow, rate_of_snowfall, proportion_melting):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_snowfall - (proportion_melting * total_snow)
    return round(total_snow, 6)