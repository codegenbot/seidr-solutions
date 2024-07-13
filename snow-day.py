Here is the completed code:

def snow_day(hours, snow_on_ground, rate_of_snow_fall, melting_rate):
    for _ in range(hours):
        snow_on_ground += rate_of_snow_fall
        snow_on_ground -= snow_on_ground * melting_rate
    return round(snow_on_ground, 5)