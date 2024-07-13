def snow_day(hours, initial_snow, rate_of_fall, proportion_melting):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall
        snow -= snow * proportion_melting
    return round(snow, 6)