def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    return round(
        initial_snow
        + (hours * rate_of_snowfall)
        - ((initial_snow + (hours * rate_of_snowfall)) * melting_rate),
        6,
    )