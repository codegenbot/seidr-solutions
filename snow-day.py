def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    return (
        ((1 - proportion_melting_per_hour) ** hours) * snow_on_ground
        + (rate_of_snow_fall * hours)
        - (snow_on_ground * proportion_melting_per_hour * hours)
    )