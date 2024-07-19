def snow_day(hours, rate_of_snow_fall, proportion_melting):
    total_snow = (rate_of_snow_fall * min(hours, 24)) - (proportion_melting * min(hours, 24))
    return round(snow_ground + total_snow, 5)