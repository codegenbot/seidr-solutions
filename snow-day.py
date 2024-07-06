def snow_day(hours, snow_on_ground, snow_fall_rate, melting_proportion):
    if hours == 0:
        return 0
    else:
        # Calculate the amount of snow that falls in this hour
        snow_fallen = snow_fall_rate * hours

        # Calculate the amount of snow that melts in this hour
        snow_melted = melting_proportion * (snow_on_ground + snow_fallen)

        # Recursively calculate the total amount of snow on the ground after the next hour
        return round(snow_on_ground + snow_fallen - snow_melted, 1)