Here is the solution:

def snow_day(hours, current_snow, rate_of_snowfall, melting_rate):
    total_snow = 0.0
    for _ in range(hours):
        total_snow += rate_of_snowfall - melting_rate * current_snow
        current_snow = max(0.0, current_snow + rate_of_snowfall - melting_rate * current_snow)
    return round(current_snow, 6)