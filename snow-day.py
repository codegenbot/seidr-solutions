def snow_day(hours, current_snow, rate, melt_rate):
    new_snow = 0
    total_snow = current_snow

    for _ in range(hours):
        new_snow += rate
        total_snow += new_snow - (total_snow * melt_rate)

    return round(total_snow, 8)