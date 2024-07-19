```
def snow_day(hours, rate_of_snow_fall, proportion_melting):
    total_snow_fell = (rate_of_snow_fall * hours)
    total_snow_melted = (proportion_melting * hours)
    return round(snow_ground + total_snow_fell - total_snow_melted, 5)