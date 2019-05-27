'''
User: bharat12
Problem:  : FANCY 
Contest:  January Long Long Challenge
'''


t=int(input())

for _ in range(t):
    s=input()
    s=s.split()
#    print(s)
    if "not" in s:
        print('Real Fancy')

    else:
        print('regularly fancy') 