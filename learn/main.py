# import os

# for x in range(1, 12):
#     with open(os.path.join(os.path.dirname(__file__), str(x).rjust(2, '0') + '.cpp'), 'x') as f:
#         ...
           
           
import random


for x in range(30):
    print(random.randint(-200, 200), end=", ")

print()

for x in range(30):
    print(random.randint(-200, 200), end=" ")