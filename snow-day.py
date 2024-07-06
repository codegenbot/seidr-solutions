```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for hour in range(hours):
        if rate_of_snowfall - (hour * melting_rate) > 0:
            total_snow += round((rate_of_snowfall - (hour * melting_rate)), 10)
        else:
            break
    return round(total_snow, 10)