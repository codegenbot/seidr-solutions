def snow_day(hours, snow_ground, rate_snow_fall, melting_rate):
    total_snow = snow_ground + hours * rate_snow_fall
    for _ in range(hours):
        total_snow += rate_snow_fall - melting_rate * total_snow
    return round(total_snow, 10)