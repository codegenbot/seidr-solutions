def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    snow = initial_snow + hours * rate_of_snowfall
    return round(snow - (hours * proportion_melting), 6)