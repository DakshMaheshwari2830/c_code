#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int month,dob;
    printf("Enter the dob: ");
    scanf("%d",&dob);
    printf("Enter the month: ");
    scanf("%d",&month);
    if(month==12 && dob>=22||month==1&&dob<=19 )
    {
        printf("Capricorn");
    }
    else if(month==1 && dob>=20||month==2&&dob<=17 )
    {
        printf("Aquarius");
    }
    else if(month==2 && dob>=18||month==3&&dob<=19 )
    {
        printf("Pisces");
    }
    else if(month==3 && dob>=20||month==4&&dob<=19 )
    {
        printf("Aries");
    }
    else if(month==4 && dob>=20||month==5&&dob<=20 )
    {
        printf("Taurus");
    }
    else if(month==5 && dob>=21||month==6&&dob<=20 )
    {
        printf("Capricorn");
    }
    else{
        printf("Wron input");
    }
    return 0;
}