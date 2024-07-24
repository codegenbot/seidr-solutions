Here is the solution:

def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_of_snow_melting_per_hour):
    snow = snow_on_ground + hours * rate_of_snow_fall
    for _ in range(int(hours)):
        if proportion_of_snow_melting_per_hour > 0:
            snow -= snow * proportion_of_snow_melting_per_hour
        else:
            break
    return round(snow,6)