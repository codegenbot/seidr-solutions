def snow_day(hours, rate_of_snow_fall, proportion_melting):
    total_snowfall = rate_of_snow_fall * hours
    remaining_hours = max(
        0, hours - 1
    )  # subtract one hour because snow starts falling after the first hour
    initial_snow_ground = 0 if hours <= 1 else snow_ground
    return round(
        initial_snow_ground + total_snowfall - proportion_melting * remaining_hours, 5
    )