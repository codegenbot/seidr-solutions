def snow_day(hours, initial_snow, rate_of_snowfall, proportion_of_melting):
    return initial_snow + (rate_of_snowfall * hours) - (proportion_of_melting * hours)