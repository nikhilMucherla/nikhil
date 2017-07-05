#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { 
    int n,temp,k=0,j=0;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
        {
        scanf("%d",&temp);
        if(temp>n)
            {
            arr2[k]=temp;
            k++;
        }
        else{
            arr1[j]=temp;
            j++;
        }
    }
   for(int i=0;i<k;i++)
       {
       for(int j=0;j<k-1;j++)
           {
           if()
       }
   }
     for(int i=0;i<k;i++)
       printf("%d ",arr1[i]);
    printf("\n");
     for(int i=0;i<j;i++)
       printf("%d ",arr2[i]);
     printf("\n");
        int arrf[n];
    int p=0;
    int l=0;
    for(int i=0;i<n;i++)
        {
        if(arr1[i]==i)
            {
            arrf[p]=i;
            p++;
        }
        else{
            arrf[p]=arr2[l];
            p++;
            l++;
    }
    }
    for(int i=0;i<n;i++)
       printf("%d ",arrf[i]);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
