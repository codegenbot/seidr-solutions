Here is the solution:

def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    snow_on_ground = initial_snow
    for _ in range(hours):
        snow_on_ground += rate_of_snowfall
        snow_on_ground *= (1 - proportion_melting)
    return round(snow_on_ground, 5)