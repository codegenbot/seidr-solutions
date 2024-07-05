def snow_day(hours, ground_snow, fall_rate, melt_rate):
    new_snow = hours * fall_rate
    melted_snow = ground_snow * melt_rate
    total_snow = round(new_snow - melted_snow + ground_snow, 2)
    return total_snow