def snow_day(hours, initial_snow, snow_fall, melt_rate):
    # Initialize variables
    current_snow = initial_snow
    hours_passed = 0
    while hours_passed < hours:
        # Calculate amount of snow that falls in the current hour
        new_snow = snow_fall * (1 - melt_rate) ** hours_passed
        # Add new snow to total snow
        current_snow += new_snow
        # Calculate amount of snow that melts in the current hour
        melted_snow = current_snow * melt_rate
        # Subtract melted snow from total snow
        current_snow -= melted_snow
        hours_passed += 1
    return current_snow