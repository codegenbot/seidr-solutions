def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    for _ in range(hours):
        snow_to_melt = snow_on_ground * proportion_melting_per_hour
        snow_on_ground -= snow_to_melt  
        new_snow = (snow_on_ground + 1) * rate_of_snow_fall 
        snow_on_ground += new_snow - int(new_snow)  
    return round(snow_on_ground, 2)