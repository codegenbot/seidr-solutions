def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    return round(
        snow_on_ground
        + (rate_of_snow_fall * hours)
        - (proportion_melting_per_hour * hours),
        5,
    )