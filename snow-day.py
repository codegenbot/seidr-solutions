Here is the completed code:

def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for i in range(hours):
        new_snow = rate_of_snowfall
        total_snow += new_snow - (initial_snow * melting_rate)
        initial_snow = total_snow
    return round(total_snow, 5)