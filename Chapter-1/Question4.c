#include <stdio.h>
main()
{
    printf("This program prints a Celsius to Farenheit table");

    float fahr,celsius;
    int lower,upper,step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("Fahreinheit\tCelsius\t \n");
    while (celsius <= upper){
        fahr = (9.0/5.0)*celsius + 32 ;
        printf("%4.0f %10.1f\n",celsius,fahr);
        celsius =  celsius +step;
    
    }

    return 0;
}
