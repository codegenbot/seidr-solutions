def snow_day(hours, initial_snow, rate_of_snow_fall, proportion_of_snow_melting):
    return initial_snow + (rate_of_snow_fall - proportion_of_snow_melting) * hours