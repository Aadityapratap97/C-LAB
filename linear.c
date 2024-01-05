#include<stdio.h>
int linearsearch(int arr[],int n,int key)
{
for(int i=0;i<n;i++)
{
if(arr[i]==key)
{
    return i;
}
}
return -1;
}
int main()
{
    int n,key;
    printf("enter the sixze of araay:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to search:");
    scanf("%d",&key);
    int (results!=-1)
    {
        printf("element %d found at index%d.\n",key,results);
    }
    else
    {
    printf("element %d not found in the array\n",key);
    }
    return 0;
}