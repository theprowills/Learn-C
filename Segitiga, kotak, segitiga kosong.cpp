#include <stdio.h>

int main()
{
    int input,baris,spasi;
    scanf("%d",&input);
// ================ SEGITIGA SIKU SIKU =================
    for (baris =1; baris <=input;baris++)
	{
    	for(int bintang=1;bintang<=baris;bintang++)
		{
    		printf("*");
		}
    	printf("\n");
	}
    printf("\n");
// ======================= KOTAK ======================= 
    for (baris =1; baris <=input;baris++)
	{
        if (baris==1|| baris==input)
		{
        	for (int full=1;full<=input;full++)
			{
        		printf("*");
			}
		} 
		else
		{
        	printf("*");
    	    for (int kiriKanan=1;kiriKanan<=input-2;kiriKanan++)
			{
        		printf(" ");
			}
        	printf("*");
        }
        printf("\n");
    }
	printf("\n");
// ================= SEGITIGA KOSONG =================== 
	for(baris=1;baris<=input;baris++)
	{
    if (baris == input)
		{
    	    for (int full=1;full <=input;full++)
			{
       		 	printf("*");
			}
		}
    else{
    		for (spasi=input-baris; spasi>0;spasi--)
			{
            	printf (" ");
			}            
	        printf("*");
    	    if (baris>1)
				{
       		 	for(int bintang=3;bintang<=baris&&baris>1;bintang++)
				{
            		printf(" ");
				}
        	    printf("*");
				}
        	printf("\n");
        }
	}
	return 0;
}
