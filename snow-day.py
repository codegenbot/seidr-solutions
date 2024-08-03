def snow_day(hours, initial_snow, snowfall_rate, melting_rate):
    return (
        initial_snow
        + (snowfall_rate * hours)
        - ((melting_rate * hours) if melting_rate > 0 else 0)
    )