```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_melted = hours * melting_rate
    total_fallen = initial_snow + rate_of_snowfall * hours
    return min(total_fallen, total_fallen - total_melted)