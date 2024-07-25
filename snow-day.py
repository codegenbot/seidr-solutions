def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_of_snow_melting):
    snow_on_ground += rate_of_snow_fall * hours
    for _ in range(int(hours)):
        snow_on_ground += rate_of_snow_fall
        snow_on_ground *= 1 - proportion_of_snow_melting
    return round(snow_on_ground, 6)