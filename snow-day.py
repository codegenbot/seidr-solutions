def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting_per_hour):
    return (
        initial_snow
        + (rate_of_snowfall * hours)
        - ((1 - proportion_melting_per_hour) * hours * initial_snow)
    )