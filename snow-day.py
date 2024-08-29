def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    total_snow = initial_snow + hours * rate_of_snowfall
    for _ in range(hours):
        if total_snow > 0:
            total_snow -= total_snow * proportion_melting
        else:
            break
    return round(total_snow, 5)