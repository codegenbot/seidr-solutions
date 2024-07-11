def snow_day(hours, snow_ground, rate_snow_fall, proportion_melting):
    return round(
        snow_ground + hours * rate_snow_fall - hours * snow_ground * proportion_melting,
        8,
    )