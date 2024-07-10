Here is the solution:

def snow_day(hours, snow_ground, rate_of_snow_fall, proportion_melting_per_hour):
    return round(snow_ground + hours * rate_of_snow_fall - hours * snow_ground * proportion_melting_per_hour, 6)