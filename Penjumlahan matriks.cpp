#include <stdio.h>

int main()
{
	int p, l;
	scanf("%d %d",&l,&p);
	
    int arr1[l][p],
        arr2[l][p],
        arr3[l][p];

    for (int i=0;i<l;i++)
	{
        for (int j=0;j<p;j++)
		{
            scanf("%d", &arr1[i][j]);
		}
    }
    printf("\n");
    for (int i=0;i<l;i++)
	{
        for (int j=0;j<p;j++)
		{
            scanf("%d", &arr2[i][j]);
		}
    }
    printf("\n");
    for (int i=0;i<l;i++)
	{
    	
        for (int j=0;j<p;j++)
		{
            int a = arr1[i][j]+arr2[i][j];
            printf("%d ", a);
		}
        printf("\n");
    }
    return 0;
}
