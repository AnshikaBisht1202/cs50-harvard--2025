from cs50 import get_float

while True:
    try:
        #
        change = get_float("Change: ")
        if change > 0:
            break
    except ValueError:
        pass

cents = change*100

# n is the number of notes required
n = 0

# x is number of 25 cent notes
x = int(cents/25)
n = n+x
# change left after x number of 25 cent notes
cents = cents-(x*25)

# y is number of 10 cent notes
y = int(cents/10)
n = n+y
# change left after y number of 10 cent notes
cents = cents-(y*10)

# y is number of 5 cent notes
z = int(cents/5)
n = n+z
# change left after z number of 5 cent notes
cents = cents-(z*5)

# w is number of 1 cent notes
w = int(cents/1)
n = n+w
# change left after w number of 1 cent notes = 0
cents = cents-(w*1)

print(f"{n}")
