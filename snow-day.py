def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    total_snow = 0.0
    current_snow = initial_snow

    for _ in range(hours):
        total_snow += current_snow
        current_snow += rate_of_fall - melt_rate * current_snow

    return round(total_snow, 6)