def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall
        if snow > 0:
            excess_snow = math.floor(snow)
            remaining_snow = snow - excess_snow
            snow = excess_snow * (1 - melt_rate) + remaining_snow
    return round(snow, 10)