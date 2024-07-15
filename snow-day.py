def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    total_snow = initial_snow + hours * rate_of_snowfall
    return round(total_snow - (hours * proportion_melting), 5)