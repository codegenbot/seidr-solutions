def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    for _ in range(hours):
        snow_to_melt = snow_on_ground * proportion_melting_per_hour
        total_snowfall = snow_to_melt * rate_of_snow_fall
        snow_on_ground -= snow_to_melt  
        snow_on_ground += total_snowfall - snow_to_melt  
    return round(snow_on_ground, 2)