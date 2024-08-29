def snow_day(hours, snow_ground, rate_of_snow_fall, proportion_of_melting):
    return round(
        snow_ground + (rate_of_snow_fall * hours) - (proportion_of_melting * hours), 10
    )