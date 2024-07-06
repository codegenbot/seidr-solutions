def snow_day(hours, snow_on_ground, snow_fall_rate, melting_proportion):
    for hour in range(hours):
        # Calculate the amount of snow that falls in each hour
        snow_fallen = snow_fall_rate * (hour + 1)

        # Calculate the amount of snow that melts in each hour
        snow_melted = melting_proportion * (snow_on_ground + snow_fallen)

        # Update the total amount of snow on the ground
        snow_on_ground += snow_fallen - snow_melted

    return round(snow_on_ground, 1)