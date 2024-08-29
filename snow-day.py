def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for hour in range(hours):
        if rate_of_snowfall > 0:
            total_snow += rate_of_snowfall
        total_snow -= melting_rate * (total_snow if total_snow > 0 else 0)
    return total_snow