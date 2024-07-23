```
    def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
        current_snow = initial_snow
        for _ in range(hours):
            melted_snow = max(0, current_snow * (1 - melting_rate))
            current_snow += rate_of_snowfall - melted_snow

        return current_snow