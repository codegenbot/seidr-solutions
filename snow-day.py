def snow_day(hours, initial_snow, rate_of_snow_fall, proportion_melting_per_hour):
    for _ in range(hours):
        snow_on_ground += initial_snow * rate_of_snow_fall  # add new snow
        snow_on_ground *= (1 - proportion_melting_per_hour)  # melt the existing snow
    return round(snow_on_ground, 2)