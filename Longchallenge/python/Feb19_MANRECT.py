'''
User: bharat12
Problem:   CHSERVE 
Contest:   February long long Challenge
'''

t=int(input())

for _ in range(t):
    
    High=0
    flag=0
    flagg=0
    dp=0
    dc=0
    flagg1=0
    flagg12=0
    count=0
    count1=0
    low=0   
    mid=0
    count=0 
    count1=0
    f11=0
    f12=0
    x1=0
    x2=0
    y1=0
    y2=0
    f21=0
    f22=0
    ff1=0
    ff2=0
    for _ in range(70):
        if High==0 and flag==0:
            print('Q',High,High)
#            print('Hello1')
            dp=int(input())
            High=min(dp,1e9)
            mid=min(int(dp/2),1e9)
            flag+=1 



        elif flagg12==0:
            if flagg==0:
                print('Q',mid,0,flush=True)
                dc=int(input())
                dp=dc
                flagg+=1
                if dc==0:
                    count=mid
                    count1=0
                    flagg12+=1

            elif flagg1==0:
                print('Q',mid,dp,flush=True)
                dc=int(input())
                flagg+=1

                flagg1+=1
                if dc==0:
                    count=mid
                    count1=dp
                    flagg12+=1

            else:
                print('Q',mid+1,0,flush=True)
#                print('Hello')
                dc=int(input())

                if mid+1==High:
                    count=mid+1
                    count1=0
                    flagg12+=1


                else:     
                    if dc<dp:
    #                    print(mid,High)
                        low=max(low,mid)
                        mid=int((low+High)/2)


                    else:
                        High=min(High,mid)
                        mid=int((low+High)/2)

                    flagg=0
                    flagg1=0    


        else:
            print('Q',count,count1,flush=True)
            d=int(input())
#            print('Hello12')

            if d==0 and f11==0 and f12==0 and f21==0 and f22==0:
    #            print('Hello Bharat Kumar')
                count=0
                f11+=1

            elif f11!=0 and f12==0 and f21==0 and f22==0:
    #            print('Hello')
                x1=d
                f12+=1
                count1=0
                count=d

            elif f11!=0 and f12!=0 and f21==0 and f22==0:
                y1=d
    #            print('Hello Bharat Kumar')
                count=10**9
                count1=y1
            #count1
                f21+=1

            elif f11!=0 and f12!=0 and f21!=0 and f22==0:
                x2=count-d
                f22+=1
                count=x2
                count1=10**9
            

            elif f11!=0  and f12!=0 and f21!=0 and f22!=0:
                y2=count1-d
                break       

                        

    print('A',x1,y1,x2,y2,flush=True)
    a=int(input())
    if a<0:
        break
                

