def snow_day(hours, start_snow, fall_rate, melt_rate):
    return (
        start_snow
        + (hours * fall_rate)
        - ((1 - melt_rate**hours) / (1 - melt_rate)) * fall_rate
    )