def snow_day(hours, snow_ground, rate_of_snow_fall, proportion_melting):
    total_snow = (rate_of_snow_fall * hours) - (proportion_melting * hours)
    return round(snow_ground + total_snow, 5)