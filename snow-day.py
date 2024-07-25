def snow_day(hours, initial_snow, rate_snowfall, melt_rate):
    total_snow = 0
    new_snow = initial_snow

    for _ in range(hours):
        total_snow += new_snow - (total_snow * melt_rate)
        new_snow += rate_snowfall

    return round(total_snow, 5)