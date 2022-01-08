#include <stdio.h>

int main()
{
    char type;
    float enter, left, enterhr, lefthr, entermin, leftmin, amount, stay;
    printf("ENTER YOUR VEHICLE TYPE : \n\tTruck(T)\n\tBus(B)\n\tCar(C)\n\tTwo wheelers(M)\n\t::");
    scanf("%c",&type);
    printf("\nAT WHAT TIME YOU ENTERED THE PARKING LOT: (HOUR(1-12):MINUTE(1-60): ");
    scanf("%f%f",&enterhr,&entermin);
    printf("\nAT WHAT TIME YOU LEFT THE PARKING LOT: (HOUR(1-12):MINUTE(1-60): ");
    scanf("%f%f",&lefthr,&leftmin);
    enter = enterhr + entermin/60;
    left = lefthr + leftmin/60;
    stay = left - enter;
    printf("\nYOUR VEHICLE STAYED FOR %f HOUR IN OUR PARKING LOT",stay);
    switch(type)
    {
        case'T':
            if(stay<=3)
                amount = stay*20;
            else
                amount = stay*30;
        printf("\nAMOUNT TO BE PAID :%f rs", amount);
        break;
        case'B':
            if(stay<=3)
                amount = stay*20;
            else
                amount = stay*30;
        printf("\nAMOUNT TO BE PAID :%f rs", amount);
        break;
        case'C':
            if(stay<=3)
                amount = stay*10;
            else
                amount = stay*20;
        printf("\nAMOUNT TO BE PAID :%f rs", amount);
        break;
        case'M':
            if(stay<=3)
                amount = stay*10;
            else
                amount = stay*20;
        printf("\nAMOUNT TO BE PAID :%f rs", amount);
        break;
        
    }
    

    return 0;
}
