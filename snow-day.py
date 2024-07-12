def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    return (
        initial_snow + (rate_of_snowfall - melting_rate) * hours
        if hours > 0
        else initial_snow
    )