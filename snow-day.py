def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_of_snow_melting):
    snow_on_ground = 0.0
    for i in range(hours):
        snow_on_ground += snow_on_ground * rate_of_snow_fall
        snow_on_ground -= snow_on_ground * proportion_of_snow_melting
    return round(snow_on_ground, 2)