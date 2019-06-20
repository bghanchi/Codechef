t=int(input())

for _ in range(t):
    l,r,g=map(int,input().split())
    if g>r:
        print(0)
    else:
        count=0
        f=0
        i=l
        while i<=r:
            if i%g==0 and f==0:
#                print(i)
                i+=g
                f+=1
                count+=1
            elif f!=0:
#                print(i)
                i+=g
                count+=1    

            if f==0:
                i+=1        

        print(count)          

