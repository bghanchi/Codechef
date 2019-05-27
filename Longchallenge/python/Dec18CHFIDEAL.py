'''
User: bharat12
Problem:  CHFIDEAL
Contest:  December Long Long Challenge
'''

import random
x=random.randint(1,3)
print(x)
y=int(input())

z=random.randint(1,3)
while z==x or z==y:
    z=random.randint(1,3)

print(z)        