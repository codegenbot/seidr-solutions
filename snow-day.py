def snow_day(hours, initial_snow, rate_of_snow_fall, proportion_melting_per_hour):
    return (
        initial_snow + rate_of_snow_fall * hours - proportion_melting_per_hour * hours
    )