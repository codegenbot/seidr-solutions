```
def snow_day(hours, rate_of_snow_fall, proportion_melting):
    total_snowfall = (rate_of_snow_fall * hours)
    remaining_hours = max(0, hours - 1)  # subtract one hour because we don't add snow in the first hour
    return round(snow_ground + total_snowfall - (proportion_melting * remaining_hours), 5)