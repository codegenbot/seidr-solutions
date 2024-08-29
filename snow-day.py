def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting):
    total_snow = snow_on_ground
    for _ in range(hours):
        total_snow *= 1 - proportion_melting  # Melting first
        total_snow += rate_of_snow_fall
    return round(total_snow, 5)