def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_fall - (rate_of_fall * melt_rate)
    return round(total_snow, 6)