#include <stdio.h>

int main ()
{
    int number,ratusan, puluhan, satuan;
    printf("Please enter the number:");
    scanf("%d",&number);

    puluhan=(number %100) ;
    ratusan=(number-puluhan) ;
    satuan=puluhan %10 ;

    ratusan/=100;
    puluhan/=10 ;

    printf("%d",ratusan+puluhan+satuan);

}
