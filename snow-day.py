```
def snow_day(hours, snow_ground, rate_of_snow_fall, proportion_melting):
    total_snow_fall = rate_of_snow_fall * hours
    total_snow_melted = proportion_melting * hours
    return round(snow_ground + total_snow_fall - total_snow_melted, 5)