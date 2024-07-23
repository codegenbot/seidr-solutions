def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow *= (1 - melting_rate) + rate_of_fall * melting_rate
    return str(round(total_snow, 6))