#include<stdio.h>
void main()
{
    int x,y,z;
    int i,j;
    printf("\n Enter the number of rows you want in the array : ");
    scanf("%d",&x);
    printf("\n Enter the number of column you want in the array : ");
    scanf("%d",&y);
    int array[x][y];
    printf("\n\n Press 1 to store elements by Row Major");
    printf("\n Press 2 to store elements by Column Major");
    printf("\n Enter your command : ");
    scanf("%d",&z);
    if(x==y)
    {
        if(z==1)
        {
            for(i=0;i<x;i++)
            {
                for(j=0;j<y;j++)
                {
                    printf("\n Enter element A[%d][%d] of array : ",i,j);
                    scanf("%d",&array[i][j]);
                }
            }
        }
        if(z==2)
        {
            for(i=0;i<y;i++)
            {
                for(j=0;j<x;j++)
                {
                    printf("\n Enter element A[%d][%d] of array : ",j,i);
                    scanf("%d",&array[j][i]);
                }
            }
        }
    }
    else
    {
        if(z==1)
        {
            for(i=0;i<x;i++)
            {
                for(j=0;j<y;j++)
                {
                    printf("\n Enter element A[%d][%d] of array : ",i,j);
                    scanf("%d",&array[i][j]);
                }
            }
        }
        if(z==2)
        {
            for(i=0;i<y;i++)
            {
                for(j=0;j<x;j++)
                {
                    printf("\n Enter element A[%d][%d] of array : ",i,j);
                    scanf("%d",&array[i][j]);
                }
            }
        }
    }


}
