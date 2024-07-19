def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    snow = (initial_snow + rate_of_snowfall * hours) - (proportion_melting * hours)
    return round(snow, 2)