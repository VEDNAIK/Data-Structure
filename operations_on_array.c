#include<stdio.h>
#include <stdlib.h>

insert(int n,int array[],int p,int item)
{
// n is the length of array
// Name of array is array
// p is the position where you want to enter the element
// item is the thing you want to enter in the array

// n is the length of array so last element of array is n-1 as it starts from 0

    int i=0;
    for(i=n-1;i>=p;i--)
    {

        array[i+1]=array[i];
    }

    array[p]=item;
    printf("\n \n \t Your array is : ");
    for(i=0;i<n+1;i++)
    {
        printf(" [%d]   ",array[i]);
    }
}

delete_element(int n,int array[],int d)
{
    int i=0;
    for(i=d;i<n;i++)
    {
        array[i]=array[i+1];
    }
    printf("\n \n \t Your array is : ");
    for(i=0;i<n-1;i++)
    {
        printf(" [%d]   ",array[i]);
    }
}

search(int s,int array[],int n)
{
    int i,j=0;
    for(i=0;i<n;i++)
    {
        if(array[i]==s)
        {
            printf("\n Element [%d] is present at location %d",s,i);
            j++;
        }
        if(j==0)
        {
            printf("\n Element is not present in the array");
        }
    }
}


binarysearch(int s,int array[],int lower_bound , int upper_bound)
{
    int n=upper_bound-lower_bound+1;
    int pos=-1;
   /* if((n+1)%2==0)
    {
        printf("\n Binary search is not possible as there is no direct access to middle element");
        goto exit;
    }*/
    int i=0,k=0,l=0;
    for(i=lower_bound;i<=upper_bound;i++)
    {
        for(int j=lower_bound;j<=upper_bound;j++)
        {
            if(array[i]>array[j])
            {
                k++;
            }
        }
        if(k>l)
        {
            printf("\n The array is not sorted please sort it first");
            goto exit;
        }

        k=0;
        l++;
    }
    int BEG=lower_bound,END=upper_bound;
    int MID;
    while(BEG<=END)
    {
        MID=(BEG+END)/2;
        if(array[MID]==s)
        {
            pos=MID;
            printf("\n Your element %d is present at position %d in the array ",s,pos);
        }
        if(array[MID]>s)
        {
            END=MID-1;
        }
        else
        {
            BEG=MID+1;
        }
    }
    if(pos==-1)
    {
        printf("\n The element %d is not present in the given range",s);
    }/*
    int beg=BEG ,end=END,mid=MID;
        while(beg<=end)
{
    mid=beg+(end-beg)/2;
    if(array[mid]==s)
    {
        pos=mid;
        printf("\n Your element %d is present at position %d in the array ",s,pos);
        break;
    }
    else if(array[mid]>s)
    {
        end=mid-1;
    }
    else
    {
        beg=mid+1;
    }
}*/
if(pos==-1)
    {
        printf("\n The element %d is not present in the given range",s);
    }
    exit:
        {

        }
}

sorting(int array[],int n)
{
    int i,temp,j;
    for(i=1;i<n;i++)//i<n can be uderstand as till n-1 as i and n both are integer
    {
        j=i;
        while(j>=1)
        {
            if(array[j-1]>array[j])
            {
                temp=array[j];
                array[j]=array[j-1];
                array[j-1]=temp;
            }
            j=j-1;
        }
    }
    printf("\nYour array has been sorted successfully");
}
traversing(int array[],int n)
{
    int a,r=0;
    printf("\n Your array is : ");
    for(r=0;r<n;r++)
    {
        printf("%d\t",array[r]);
    }
}

void main()
{
    int x;
    printf("Enter the size of array : ");
    scanf("%d",&x);
// By default we are setting the size of array as 100 as we need more space for insertion.
    int arr[100];
    int j;
    for(j=0;j<x;j++)
    {
        printf("\n Enter %d element of array : ",j+1);
        scanf("%d",&arr[j]);
    }
    printf("\n \n \t Your array is : ");
    for(j=0;j<x;j++)
    {
        printf(" [%d]   ",arr[j]);
    }

    int select;
    abc:
    printf("\n\n\n\nPress 1 for traversing the array");
    printf("\nPress 2 for inserting an element to the array");
    printf("\nPress 3 for deleting an element from the array");
    printf("\nPress 4 to search an element in the array");
    printf("\nPress 5 to search an element in the array by using binary search");
    printf("\nPress 6 to sort the array");
    printf("\nPress 7 to exit\n");
    printf("\nEnter your command : ");
    scanf("%d",&select);
    if(select==1)
    {
        traversing(arr,x);
        goto abc;
    }

    if(select==2)
    {
        int a,b;
            printf("\n\n\n Enter the element you want to insert and position one less than actual position : ");
            scanf("%d %d",&a,&b);
            if(b>x)
            {
                printf("\n Insertion is not possible");
                goto abc;
            }
            else
            {
                insert(x,arr,b,a);
                x=x+1;
                goto abc;
            }
    }
    if(select==3)
    {
        int del,a_1;//a_1 is the position of element you want to delete and del is the element you want to delete
        printf("\n\n\n Enter the position of element you want to delete : ");
        scanf("%d",&del);
        //delete_element(x,arr,del);
        if(del>x-1)
        {
            printf("\n Deletion is not possible is not possible");
        }
        else
        {
            delete_element(x,arr,del);
            x--;
            goto abc;
        }

    }
    if(select==4)
    {
        int f;
        printf("\n Enter the element you want to search : ");
        scanf("%d",&f);
        search(f,arr,x);
        goto abc;
    }
    if(select==5)
    {
        int f,l_b,u_b;
        printf("\n Enter the element you want to search : ");
        scanf("%d",&f);
        printf("\n Enter the lower bound value :");
        scanf("%d",&l_b);
        printf("\n Enter the upper bound value :");
        scanf("%d",&u_b);

        binarysearch(f,arr,l_b,u_b);
        goto abc;
    }
    if(select==6)
    {
        sorting(arr,x);
        goto abc;
    }
    if(select==7)
    {
        exit(0);
    }









}


