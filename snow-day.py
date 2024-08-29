def snow_day(hours, initial_snow, rate, melt_rate):
    return (
        initial_snow + (rate - melt_rate) * hours
        if (rate - melt_rate) > 0
        else initial_snow
    )