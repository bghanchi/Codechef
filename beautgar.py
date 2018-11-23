t=int(input())
for i in range(t):
    s=input()
    s.upper()
    if len(s)==0:
        print('yes')
    else:
        r=0
        g=0
        if s.count('R')==s.count('G'):
            for i in range(len(s)):
                if i==len(s)-1:
                    if s[i]==s[0]:
                        if s[i]=='R':
                            r+=1
                        else:
                            g+=1    
                else:
                    if s[i]==s[i+1]:
                        if s[i]=='R':
                            r+=1
                        else:
                            g+=1    

            if (r+g)%2==0 and (r+g)<=2:
                print('yes')
            else:
                print('no')
        else:
            print('no')                








'''
        s=input()
        s.upper()
        a=s.count('G')
        b=s.count('R')
#        print(a,b,a==b)
        if a+b==1:
            print('yes') 
        else:
            if a==b:
                print('yes')
            else:
                print('no')    

'''
'''
for i in range(t):
    s=input()
    s.upper()
    flag=0
    if s.count('G')>0 and s.count('R')>0:
        if s.count('GGG')>0 or s.count('RRR')>0:
            print('no')
        else:
            print('yes')
    else:
        print('no')            




'''