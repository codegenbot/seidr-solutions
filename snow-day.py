def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = float(initial_snow)
    for _ in range(hours):
        snow_added = round(rate_of_fall, 6)
        snow_melted = round(total_snow * melting_rate, 6)
        total_snow = round(snow_added - snow_melted, 6)
    return str(total_snow)