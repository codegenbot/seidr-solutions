def snow_day(hours, initial_snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    snow_on_ground = initial_snow_on_ground
    for _ in range(hours):
        snow_on_ground += rate_of_snow_fall
        snow_on_ground *= (1 - proportion_melting_per_hour)
    return snow_on_ground