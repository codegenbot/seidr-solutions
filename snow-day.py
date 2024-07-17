Here is the completed code:

def snow_day(hours, current_snow, rate_of_snowfall, melting_rate):
    total_snow = current_snow
    for _ in range(hours):
        total_snow += rate_of_snowfall
        total_snow -= melting_rate * total_snow
    return round(total_snow, 6)