'''
User: bharat12
Problem:  DPS 
Contest:   May Launchtime Challenge

'''

t=int(input())


for _ in range(t):
    s=input()
    if len(s)%2!=0:
        print('DPS')
    else:
        print('!DPS')    
