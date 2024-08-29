def snow_day(hours, initial_snow, snow_fall_rate, melt_rate):
    return round(
        initial_snow + (snow_fall_rate * hours) - ((melt_rate * hours) / 100), 5
    )