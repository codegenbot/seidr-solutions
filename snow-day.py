def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = int(initial_snow * 1000)
    for _ in range(hours):
        total_snow = (total_snow + int(rate_of_fall * 1000)) // 1000 - (total_snow // 1000) * int(melting_rate * 1000)
    return str(total_snow / 1000.0)