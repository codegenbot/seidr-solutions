Here is the completed code:

def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    total_snow = snow_on_ground
    for _ in range(int(hours)):
        total_snow += rate_of_snow_fall - (proportion_melting_per_hour * total_snow)
    return total_snow