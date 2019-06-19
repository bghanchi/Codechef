t=int(input())


def reverse1(n):
    n=list(str(n))
    n=reversed(n)
    return int("".join(n))

    


for _ in range(t):
    n=int(input())
    n1=str(n)
    
    str1=''
    index=0
    maxx=reverse1(n)
    arr=[]
    for i in n1:
        arr.append(int(i))

    if sum(arr)==1:
        print((len(arr)-1)*'9') 
    
    else:
        for i in range(len(n1)):
            if i==0 and int(n1[i])==1:
                str1+=n1[i]

            else:
                if int(n1[i])>0:
                    str1+=str(int(n1[i])-1)
    #                print(int(n1[i])-1,i)
                    str1+=(len(n1)-(i+1))*'9'
                    index=i
        #            print(str1)
                    break

                else:
                    str1+=n1[i]    

        s=list(str1)
        s.reverse()
        s=int("".join(s))
        print(max(maxx,s))


            
#    maxx=-1**9



#    print(maxx,maxx1)    


'''
    while n1>0 and (n1>=n-100):
        maxx=max(maxx,reverse(n1))
        n1-=1

    maxx1=-1**9
    for i in range(1,n):
        maxx1=max(maxx1,reverse(i))

'''    