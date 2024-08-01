def snow_day(hours, current_snow, rate_of_fall, melt_rate):
    snow = current_snow
    for _ in range(hours):
        snow += rate_of_fall
        snow -= snow * melt_rate
    return round(snow, 5)