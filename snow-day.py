def calculate_snow(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall
        snow -= min(snow, rate_of_fall) * melting_rate
    return snow