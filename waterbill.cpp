#include<stdio.h>
main ()
{

    int flat_size=0;
    float price=0.0;
    printf("Enter your flat size:");
    scanf("%d",&flat_size);
    if(flat_size<=15)
    {
        printf("your flat rate is 15$");
    }
    else if(flat_size>1000 && flat_size<=2000)
    {
        price=0.0175*flat_size;
        printf("your flat rate is %f$",price);
    }
    else if(flat_size>2000 && flat_size<=3000)
    {
        price=0.02*flat_size;
        printf("your flat rate is %f$",price);
    }
    else
    {
        printf("your flat rate is 70$");
    }
    return 0;

}