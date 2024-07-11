Here is the solution:

def snow_day(hours, initial_snow, snow_fall_rate, melting_rate):
    total_snow = 0.0
    for _ in range(hours):
        total_snow += snow_fall_rate - melting_rate * total_snow
    return round(total_snow, 9)