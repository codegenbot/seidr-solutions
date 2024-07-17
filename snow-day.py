def snow_day(hours, ground_snow, rate_of_fall, melt_rate):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_fall
        if total_snow > ground_snow:
            excess_snow = total_snow - ground_snow
            total_snow -= excess_snow * (1 - melt_rate)
        else:
            break
    return round(total_snow, 8)