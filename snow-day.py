def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_fall
        if total_snow > 0:
            excess_snow = total_snow - int(total_snow)
            total_snow = int(total_snow)
            total_snow -= min(excess_snow, melting_rate * (total_snow + 1))
    return round(total_snow + excess_snow, 6)