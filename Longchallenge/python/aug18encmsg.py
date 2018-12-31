'''
User: bharat12
Problem: ENCMSG
'''
t=int(input())
for k in range(t):
    n=int(input())
    s=input()
    i=0
    a='abcdefghijklmnopqrstuvwxyz'
    a=list(a)
    s=list(s)

    def swap(a,b):
        return b,a

    if n%2==0:
        while i<n:
            s[i], s[i+1] = swap(s[i], s[i+1])
            i=i+2
    else:
        while i<n-1:
            s[i], s[i+1] = swap(s[i], s[i+1])
            i=i+2

    for i in range(n):
        index=a.index(s[i])
        s[i]=a[25-index]

    print("".join(s))