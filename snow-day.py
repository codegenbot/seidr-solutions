def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    return round(
        initial_snow
        + hours * rate_of_snowfall
        - hours * initial_snow * proportion_melting,
        10,
    )