def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    if proportion_melting_per_hour == 1:
        return snow_on_ground
    else:
        return (snow_on_ground + rate_of_snow_fall * hours) / ((1 - proportion_melting_per_hour)**hours)