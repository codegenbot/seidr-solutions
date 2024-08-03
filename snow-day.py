def snow_day(hours, initial_snow, rate_of_snow_fall, melting_rate):
    return round(
        initial_snow + (hours * rate_of_snow_fall) - ((hours * melting_rate)), 8
    )