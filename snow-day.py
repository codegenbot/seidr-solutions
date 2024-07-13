def snow_day(hours, initial_snow, snow_rate, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += snow_rate - melt_rate * total_snow
    return round(total_snow, 9)