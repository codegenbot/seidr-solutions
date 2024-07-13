def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    return round(
        initial_snow + rate_of_snowfall * hours - proportion_melting * hours, 6
    )