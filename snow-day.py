def snow_day(hours, rate_of_snow_fall, proportion_melting):
    total_snow = (rate_of_snow_fall * min(hours, 0)) - (
        proportion_melting * abs(min(hours, 0))
    )
    return round(snow_ground + total_snow, 5)