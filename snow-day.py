```
def snow_day(hours, rate_of_snow_fall, proportion_melting):
    snow_ground = 0
    for _ in range(hours):
        if snow_ground + rate_of_snow_fall <= 100:
            snow_ground += rate_of_snow_fall
        else:
            snow_ground += rate_of_snow_fall - (rate_of_snow_fall * 100 / 100)
        snow_ground -= proportion_melting
    return round(snow_ground, 5)