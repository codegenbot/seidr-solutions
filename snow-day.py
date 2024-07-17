def snow_day(hours, initial_snow, rate_of_snow_fall, proportion_melting):
    return round(
        initial_snow + hours * rate_of_snow_fall - (hours * proportion_melting), 6
    )