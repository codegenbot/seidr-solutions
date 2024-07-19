def snow_day(hours, rate_of_snow_fall, proportion_melting):
    if hours <= 0:
        return 0
    total_snowfall = (rate_of_snow_fall * hours) - (proportion_melting * hours)
    return round(max(0, snow_ground + total_snowfall), 5)