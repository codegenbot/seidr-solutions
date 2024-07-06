def snow_day(hours, snow_on_ground, snow_fall_rate, melting_proportion):
    total_snow = 0
    for hour in range(hours):
        current_snow = snow_on_ground + (hour * snow_fall_rate)
        new_snow = current_snow * (1 - melting_proportion)
        total_snow += new_snow
    return round(total_snow, 1)