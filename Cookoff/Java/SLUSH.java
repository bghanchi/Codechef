//problem link->


import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

class SLUSH
{
    
    public static void main (String []arg) 
    {       Scanner sc=new Scanner(System.in);
            int t=sc.nextInt();

            for(int k=1;k<=t;k++)
            {
                int n=sc.nextInt();
                int m=sc.nextInt();
                int flav[]=new int[m+1];
                int a[]=new int[n];
                for(int i=1;i<=m;i++)
                {
                    flav[i]=sc.nextInt();
                }
                int s=0;
                for(int i=0;i<n;i++)
                {
                    int d=sc.nextInt();
                    int f=sc.nextInt();
                    int b=sc.nextInt();
                    if(flav[d]>0)
                    {
                        a[i]=d;
                        flav[d]-=1;
                        s+=f;
                    }
                    else
                    {
                        a[i]=0;
                        s=s+b;
                    }
                }
                System.out.print(s+"\n");
                for(int i=0;i<n;i++)
                {   int j=1;
                    if(a[i]==0)
                    {
                        while(j<=m)
                        { 
                              if(flav[j]>0){
                                a[i]=j;
                                flav[j]=flav[j]-1;
                                break;
                              } 
                            j++;

                        }
                    }
                    System.out.print(a[i]+" ");
                }
                System.out.print("\n");
                }
    }
}