
#include <stdio.h>
#include <math.h>

int main()
{

//**********************************************************************************************************************************************************************************************


    /*printf("\n");
    printf("\n*PASSWORD PROTECTED PERSONAL DIARY*");

    printf("\n\tMAIN MENU\n");
    printf("\n ADD RECORD\t[1]");
    printf("\n VIEW RECORD\t[2]");
    printf("\n EDIT RECORD\t[3]");
    printf("\n DELETE RECORD\t[4]");
    printf("\n EDIT PASSWORD\t[5]");
    printf("\n EXIT \t\t[6]");*/

//**********************************************************************************************************************************************************************************************


        /*int age=0;
        printf("Enter age : ");
        scanf("%d",&age);
        printf("Your age is %d",age);*/


//**********************************************************************************************************************************************************************************************


        /*int firstNum;
        int secondNum;

        int product = 1;

        printf("Enter first Number:\t");
        scanf("%d", &firstNum);

        printf("Enter second Number:\t");
        scanf("%d", &secondNum);

        product = firstNum*secondNum;

        printf("The product is %d", product);*/

//**********************************************************************************************************************************************************************************************


        /*float num;
        char ch;

        printf("Enter the floating number : ");
        scanf("%f",&num);
        printf("Enter the character : ");
        scanf(" %c",&ch);

        printf("Your Floating number is :%f\n",num);
        printf("Your Character is:%c\n",ch);

        printf("ASCII value of '%c' is: %d\n", ch, ch);*/


//**********************************************************************************************************************************************************************************************


    //char name[10];
    //int age;
    //float mark1, mark2, mark3, totalMarks;

    //// Input name
    //printf("Enter your name: ");
    //scanf_s("%9s", name, (unsigned int)sizeof(name));

    //// Input age
    //printf("Enter your age: ");
    //scanf_s("%d", &age);

    //// Input marks for three subjects
    //printf("Enter marks for subject 1: ");
    //scanf_s("%f", &mark1);
    //printf("Enter marks for subject 2: ");
    //scanf_s("%f", &mark2);
    //printf("Enter marks for subject 3: ");
    //scanf_s("%f", &mark3);

    //// Calculate total marks
    //totalMarks = mark1 + mark2 + mark3;

    //// Output the results
    //printf("\nName: %s\n", name);
    //printf("Age: %d\n", age);
    //printf("Total Marks: %.2f\n", totalMarks);




//**********************************************************************************************************************************************************************************************

        // Distance Conversion

    /*float km, meter, feet;

    printf("Enter distance in KM: ");
    scanf_s("%f", &km);

    meter = km * 1000;
    feet = km * 3280.84;

    printf("\n");
    printf("Distance in meters = %f m\n", meter);
    printf("Distance in feet = %.2f ft\n", feet);

    return 0;*/

//**********************************************************************************************************************************************************************************************

        //acceleration
    /*float velocity, distance, acceleration, time;

    printf("Enter velocity of the jet (m/s): ");
    scanf_s("%f", &velocity);

    printf("Enter distance covered by the jet (meters): ");
    scanf_s("%f", &distance);

    acceleration = (velocity * velocity) / (2 * distance);
    time = velocity / acceleration;

    printf("\n");
    printf("Acceleration os the jet = %f m/s^2\n", acceleration);
    printf("Time to takeoff speed = %f seconds\n", time);

    return 0;*/


//**********************************************************************************************************************************************************************************************

        //temperature conversion
    /*float fahrenhiet, celsius;

    printf("Enter the temperature in farenhiet: ");
    scanf_s("%f", &fahrenhiet);

    celsius = (5.0 / 9.0) * (fahrenhiet - 32);

    printf("Temperature in celsius is %f\n", celsius);

    return 0;*/

//**********************************************************************************************************************************************************************************************

        //Ask user for what he has eaten in snack time. If user types Fruit (‘F’) or Juice (‘J). Display it’s a healthy snack. Otherwise display it’s an unhealthy snack. 
    /* char snack;

    printf("What dis you eat for a snack? Type'F' for Fruits or 'J' for juice: ");
    scanf_s(" %c", &snack);

    if (snack == 'F' || snack == 'f') {
        printf("It's a healthy snack.\n");
    }
    else if (snack == 'J' || snack == 'j') {
        printf("It's a healthy snack.\n");
    }
    else
    {
        printf("It's an unhealthy sanck.\n");
    }

    return 0;*/

//**********************************************************************************************************************************************************************************************

        //Dozen Calculator
    /*int oranges;

    printf("Enter the number of oranges: ");
    scanf_s("%d", &oranges);

    if (oranges % 12 == 0)
    {
        int dozens = oranges / 12;
        printf("%d oranges make %d dozens\n", oranges, dozens);
    }
    else
    {
        printf("Your required oranes can not be in dozens\n");
    }

    return 0;*/
        
//**********************************************************************************************************************************************************************************************

        //year check
    /*int year;
    printf("Enter year: ");
    scanf_s("%d", &year);

    if (year % 4 == 0) {
        printf("%d is a leap year\n", year);
    }
    else {
        printf("Next leap year is in %d years\n", 4 - (year % 4));
    }

    return 0;*/

//**********************************************************************************************************************************************************************************************

        //Wind Intensity
    int windspeed = 0;
    printf("Enter wind speed: ");
    scanf_s("%d", &windspeed);

    if (windspeed>=72)
    {
        printf("hurricane\n");
    }
    else if(windspeed>=55)
    {
        printf("whole gale\n");
    }
    else if (windspeed >= 39)
    {
        printf("gale\n");
    }
    else if (windspeed >= 25)
    {
        printf("strong wind\n");
    }
    else
    {
        printf("Not a strong wind\n");
    }

    return 0;

//**********************************************************************************************************************************************************************************************

}