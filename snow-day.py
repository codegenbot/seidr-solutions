def snow_day(hours, initial_snow, snow_rate, melting_rate):
    total_snow = 0
    for _ in range(int(hours)):
        total_snow += snow_rate - melting_rate * total_snow
    return round(total_snow, 5)