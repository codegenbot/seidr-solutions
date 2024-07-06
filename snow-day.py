```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    current_snow = initial_snow
    for hour in range(hours):
        new_snow = round(current_snow + rate_of_snowfall, 10)
        current_snow = max(0, new_snow - int(hour * melting_rate))
        total_snow += current_snow - initial_snow
    return round(initial_snow + total_snow, 10)