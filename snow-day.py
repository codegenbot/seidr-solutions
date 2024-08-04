def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    return (
        initial_snow + (rate_of_fall - melting_rate) * hours
        if melting_rate < 1
        else initial_snow
    )