def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    snow = snow_on_ground
    for _ in range(hours):
        snow_to_melt = snow * proportion_melting_per_hour
        snow -= snow_to_melt  
        snow += rate_of_snow_fall - (snow_to_melt if snow_to_melt > 0 else 0)
    return round(snow, 2)