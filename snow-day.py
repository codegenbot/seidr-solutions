def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall  # Add the new snow
        snow *= (1 - melting_rate)  # Subtract melted snow
    return round(snow, 6)