# while True loop to take height only between 0 and 8
while True:
    try:
        # height is taken as an int
        height = int(input("Height: "))
        if height > 0 and height <= 8:
            break
    except ValueError:
        pass

for i in range(height):
    # logic for i number of rows
    print(" "*(height-i-1)+"#"*(i+1))
