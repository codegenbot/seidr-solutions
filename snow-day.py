def snow_day(hours, initial_snow, snowfall_rate, melt_rate):
    return (
        initial_snow
        + (hours * snowfall_rate)
        - ((hours * melt_rate) if hours > 0 else 0)
    )