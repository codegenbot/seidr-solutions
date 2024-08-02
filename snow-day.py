def snow_day(hours, initial_snow, rate, melt_rate):
    return round(
        initial_snow + (hours * rate) - ((hours * initial_snow) / 100 * melt_rate), 5
    )