import os
import time

# 60 x 60 
x = 0
y = 0

while x < 60:
    os.system("clear")

    print(f"{'  ' * x} <#_#>")

    x += 1
    time.sleep(0.01)

while y < 60:
    os.system("clear")

    print('\n' * y + '  ' * x + "<#_#>")

    y += 1
    time.sleep(0.01)

while x >= 0:
    os.system("clear")

    print("\n" * y + "  " * x + "<#_#>")

    x -= 1
    time.sleep(0.01)

while y >= 0:
    os.system("clear")

    print("\n" * y + "<#_#>")

    y -= 1
    time.sleep(0.01)

input("Press Enter to continue...")
