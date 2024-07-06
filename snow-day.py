def snow_day(hours, ground_snow, fall_rate, melt_rate):
    new_snow = hours * fall_rate
    melted_snow = ground_snow * melt_rate
    if melted_snow >= new_snow:
        total_snow = 0
    else:
        total_snow = new_snow - melted_snow + ground_snow
    return total_snow