def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    return (initial_snow + hours * rate_of_snowfall) / (1 - proportion_melting**hours)