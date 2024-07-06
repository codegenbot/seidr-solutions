def snow_day(hours, snow_on_ground, snow_fall_rate, melting_proportion):
    total_snow = 0
    for hour in range(hours):
        total_snow += (snow_on_ground + (hour * snow_fall_rate)) - (melting_proportion * total_snow)
    return round(total_snow, 1)