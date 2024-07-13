def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    total_snow = 0
    new_snow = initial_snow

    for _ in range(hours):
        total_snow += (new_snow - (proportion_melting * new_snow)) + rate_of_snowfall
        new_snow = total_snow

    return round(total_snow, 8)