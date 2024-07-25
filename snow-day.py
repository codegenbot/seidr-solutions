def snow_day(hours, current_snow, rate_of_fall, melt_rate):
    snow = current_snow
    for _ in range(hours):
        snow += rate_of_fall
        if snow > 0:
            excess = math.ceil(snow - melt_rate)
            snow -= excess
            snow -= excess * melt_rate
    return round(snow, 6)