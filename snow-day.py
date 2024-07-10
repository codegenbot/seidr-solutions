```
def get_snow_day_parameters():
    while True:
        print("Please enter snow day parameters...")

        initial_snow = 0
        while initial_snow <= 0:
            print("Please enter a positive value for initial snow.")
            try:
                initial_snow = float(input("Enter initial amount of snow on the ground: "))
            except ValueError:
                print("Invalid input. Please enter a valid number.")

        rate_of_snowfall = 0
        while rate_of_snowfall <= 0:
            try:
                rate_of_snowfall = float(input("Enter rate of snow fall per hour: "))
            except ValueError:
                print("Invalid input. Please enter a valid number.")

        melting_rate = 0
        while melting_rate < 0 or melting_rate > 1:
            try:
                melting_rate = float(input("Enter proportion of snow melting per hour (0 to 1): "))
            except ValueError:
                print("Invalid input. Please enter a valid number.")

        total_hours = int(float(input("Enter number of hours: ")))

        return initial_snow, rate_of_snowfall, melting_rate, total_hours

total_snow, rate_of_snowfall, melting_rate, total_hours = get_snow_day_parameters()

total_snow = 0
for _ in range(total_hours):
    total_snow += rate_of_snowfall
    total_snow -= melting_rate * total_snow

print(total_snow)