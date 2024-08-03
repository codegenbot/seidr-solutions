def snow_day(hours, initial_snow, rate_snowfall, melt_rate):
    return round(
        initial_snow
        + (rate_snowfall * hours)
        - ((melt_rate * hours) if hours > 0 else 0),
        6,
    )