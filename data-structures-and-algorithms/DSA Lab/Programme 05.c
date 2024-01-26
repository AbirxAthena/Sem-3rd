#include <stdio.h>
#include <conio.h>

    void main() {
    int a[100];
    int i,j,sum,size,mm;
    float mean,median,t;
    printf("Enter size of the array");
    scanf("%d",&size);
    
    printf("Enter %d numbers:\n",size);

    for (i=0; i<size ; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < size; i++) {
        for (j = 0; j < size -1 ; j++){
            if(a[j] > a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
     for (i = 0; i < size; i++) {
         sum+=a[i];
     }
    
 
        printf("Sorted Array of Elements are:");
        for (i=0; i<size; ++i)
        {
            printf("%d \n",a[i]);
        }
        if((size%2)==0)
        {
         mm = size/2;
         t = a[mm]+a[mm - 1];
         median = t/2;
        }
        else
        {
        mm=size/2;
        median = a[mm];
        }
        mean = sum/size;
        printf("Mean of the array is: %f \n & Median of array is: %f",mean,median);
        
    
    getch();
    }
