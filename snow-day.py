def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    snow_on_ground = snow_on_ground * (1 - proportion_melting_per_hour) + rate_of_snow_fall
    return snow_on_ground