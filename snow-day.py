def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow *= (1 - melting_rate)  # Apply melting before adding new snow
        total_snow += rate_of_snowfall
    return total_snow