def snow_day(hours, current_snow, rate, melt_rate):
    total_snow = 0.0
    for _ in range(int(hours)):
        new_snow = int(rate)
        total_snow += new_snow - (total_snow * melt_rate)
    return round(total_snow, 6)