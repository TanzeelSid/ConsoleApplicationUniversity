
#include <stdio.h>
#include <math.h>
#include<stdbool.h>

//int main()
//{

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
    /*int windspeed = 0;
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

    return 0;*/

//**********************************************************************************************************************************************************************************************

        //Vowels
    /*char alphabet;

    printf("Type any alphabet: ");
    scanf_s(" %c", &alphabet);

    if( alphabet == 'A' || alphabet == 'a' || alphabet == 'E' || alphabet == 'e' ||
        alphabet == 'I' || alphabet == 'i' || alphabet == 'O' || alphabet == 'o' ||
        alphabet == 'U' || alphabet == 'u')
    {
        printf("It's a vowel.\n");
    }
    else if (alphabet == 'W' || alphabet == 'w' || alphabet == 'Y' || alphabet == 'y')
    {
        printf("It's a semi vowel.\n");
    }
    else
    {
        printf("It's a constant\n");
    }

    return 0;*/

//**********************************************************************************************************************************************************************************************

        //temperature check
    /*int celsius;

    printf("Enter the temperature in Celsius: ");
    scanf_s(" %d", &celsius);

    if (celsius > 0) {
        printf("Above Freezing.\n");
    }
    else if(celsius == 0)
    {
        printf("Freezig Point.\n");
    }
    else
    {
        printf("Below Freezing.\n");
    }

    return 0;*/

//**********************************************************************************************************************************************************************************************

        //calculator
    /*float num1, num2, result;
    int opt;
    printf("Enter two numbers: ");
    scanf_s("%f %f", &num1, &num2);
    printf("Select any one option from 1 to 4\n");
    scanf_s("%d", &opt);

    switch(opt)
    {
        case 1:
            result = num1 + num2;
            printf("The Addition of two number is %.2f\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("The Subtraction of two number is %.2f\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("The Multiplication of two number is %.2f\n", result);
            break;

        case 4:
            result = num1 / num2;
            printf("The Division of two number is %.2f\n", result);
            break;

        default:
            printf("Invalid");
    }

    return 0;*/

//**********************************************************************************************************************************************************************************************

        //Marksheet
    /*int marks;
    printf("Enter your marks: ");
    scanf_s("%d", &marks);

    switch (marks)
    {
        case 86:
            printf("For your entered marks, your grade is A and your GPA is 4.00.\n");
            break;

        case 82:
            printf("For your entered marks, your grade is A- and your gpa is 3.67.\n");
            break;

        case 78:
            printf("For your entered marks, your grade is B+ and your GPA is 3.33.\n");
            break;

        case 74:
            printf("For your entered marks, your grade is B and your GPA is 3.00.\n");
            break;

        case 70:
            printf("For your entered marks, your grade is B- and your GPA is 2.67.\n");
            break;

        case 66:
            printf("For your entered marks, your grade is C+ and your GPA is 2.33.\n");
            break;

        case 62:
            printf("For your entered marks, your grade is C and your GPA is 2.00.\n");
            break;
        
        case 58:
            printf("For your entered marks, your grade is C- and your GPA is 1.67.\n");
            break;
        
        case 54:
            printf("For your entered marks, your grade is D+ and your GPA is 1.33.\n");
            break;
        
        case 50:
            printf("For your entered marks, your grade is D and your GPA is 1.00.\n");
            break;
        
        default:
            printf("Invalid marks entered.\n");
    }

    return 0;*/

//**********************************************************************************************************************************************************************************************

        //FoodMenu
    //char order;
    //int quantity;
    //int totalprice = 0;

    //printf("Type B if you want to order Burger (Rs.200 each).\n");
    //printf("Type F if you want to order French Fries (Rs.50 each).\n");
    //printf("Type P if you want to order Pizza (Rs.500 each).\n");
    //printf("Type S if you want to order Sandwiches (Rs.150 each).\n\n");

    //printf("Enter your order: ");
    //scanf_s(" %c", &order);

    //printf("Enter the quantity: ");
    //scanf_s("%d", &quantity);

    //switch (order)
    //{
    //    case 'b':
    //    case 'B':
    //        totalprice = 200 * quantity;
    //        printf("Your order is Burger. Total cost: Rs.%d\n",totalprice);
    //        break;

    //    case 'f':
    //    case 'F':
    //        totalprice = 50 * quantity;
    //        printf("Your order is French Fries. Total cost: Rs.%d\n",totalprice);
    //        break;

    //    case 'p':
    //    case 'P':
    //        totalprice = 500 * quantity;
    //        printf("Your order is Pizza. Total cost: Rs.%d\n",totalprice);
    //        break;

    //    case 's':
    //    case 'S':
    //        totalprice = 150 * quantity;
    //        printf("Your order is Sandwiches. Total cost: Rs.%d\n",totalprice);
    //        break;

    //    default:
    //        printf("Invalid Order.\n");
    //}

    //return 0;


//**********************************************************************************************************************************************************************************************


        /* int num;
         printf("Enter the number: ");
         scanf_s("%d", &num);
         while(num!=0){
             if (num  %2 == 0 ){
                 printf("Number is even. \n");
             }
             else{
                 printf("Number is odd. \n");
             }
             break;
         }*/


         /*int obtmarks = 0;
         int counter = 0;
         for (counter = 0; counter <10; counter ++){
             printf("Enter Obtained Marks: ");
             scanf_s("%d",&obtmarks);
             if(obtmarks >= 50){
                 printf("pass \n");
             }
             else{
                 printf("fail \n");
             }
         }*/


    /*int i = 0;
    int  num = 0;
    int power = 1;
    printf("Enter the number: ");
    scanf_s("%d", &num);

    for (i = 0; i < num; i++) {
        power = power * 2;
    }
    printf("2 to power %d is %d", num, power);*/


   /* int num, i = 1;
    printf("Enter the number for it's table: ");
    scanf_s("%d", &num);
    printf("Table of %d is:\n", num);
    do
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i<=10);*/


   // return 0;


//**********************************************************************************************************************************************************************************************

        //sum up from loop
    /*int num = 0, i;

    for (i = 0; i <= 10; i++) {
        printf("%d", i);

        num += i;
    }

    printf("\nTotal Sum:%d\n", num);

    return 0;*/


//**********************************************************************************************************************************************************************************************


        //Checking Armstrong number
    /*int num, number, remainder, result = 0;

    printf("Enter a three-digit number: ");
    scanf_s("%d", &num);

    number = num;

    while (num != 0) {
        remainder = num % 10;

        int power = 1;
        for (int i = 0; i < 3; i++) {
            power *= remainder;
        }

        result += power;
        num /= 10;

    }

    if (result == number)
    {
        printf("%d is an Armstrong number.\n", number);
    }
    else {
        printf("%d is not an Armstrong number.\n", number);
    }


    return 0;*/

//**********************************************************************************************************************************************************************************************

        //TAX CALCULATOR
    /*int income, tax, netincome, taxrate;

    printf("Enter your annual income: ");
    scanf_s("%d", &income);

    if (income>700000)
    {
        tax = income * 20 / 100;
        netincome = income - tax;
        taxrate = 20;

    }
    else if (income>300000)
    {
        tax = income * 10 / 100;
        netincome = income - tax;
        taxrate = 10;

    }
    else {
        tax =0;
        netincome = income - tax;
        taxrate = 0;

    }

    printf("Income: %d\n", income);
    printf("Tax Rate: %d \n", taxrate);
    printf("Tax amount: %d\n", tax);
    printf("Net income: %d\n", netincome);

    return 0;*/

//**********************************************************************************************************************************************************************************************

        //ELECTRICITY BILL CALCULATOR
    //int units;
    //float bill = 0, discount = 0, finalBill = 0;

    //printf("Enter the number of units consumed: ");
    //scanf("%d", &units);


    //if (units <= 100) {
    //    bill = units * 5;
    //}
    //else if (units <= 300) {
    //    bill = (100 * 5) + ((units - 100) * 7);
    //}
    //else {
    //    bill = (100 * 5) + (200 * 7) + ((units - 300) * 10);
    //}

    //bill += 50;

    //if (bill > 1000) {
    //    discount = bill * 0.10;
    //}

    //finalBill = bill - discount;

    //printf("\nElectricity Bill Summary:\n");
    //printf("Total units consumed: %d\n", units);
    //printf("Total bill before discount: Rs. %.2f\n", bill);
    //printf("Discount amount: Rs. %.2f\n", discount);
    //printf("Final bill amount: Rs. %.2f\n", finalBill);

    //return 0;

//**********************************************************************************************************************************************************************************************

        //RESTURANT BILL WITH DISCOUNT
    /* float bill = 0, finalbill = 0, discount = 0, finalamount = 0, servicecharge = 0, totaldiscount = 0;
    char loyalty;

    printf("Enter your Bill: ");
    scanf_s("%f", &bill);

    printf("Are a loyalty program member (y/n): ");
    scanf_s(" %c", &loyalty,1);

    if (bill>1000)
    {
        discount = bill * 20 / 100;
    }
    else if (bill>500)
    {
        discount = bill * 15 / 100;
    }

    finalbill = bill - discount;
    totaldiscount = discount;

    if (loyalty == 'y' || loyalty=='Y')
    {
        float loyaltydiscount = finalbill * 10 / 100;
        finalbill -= loyaltydiscount;
        totaldiscount += loyaltydiscount;
    }

    servicecharge = finalbill * 10 / 100;
    finalamount = finalbill + servicecharge;

    printf("Payment Summary: \n");
    printf("Original Bill Amount: Rs. %.2f \n", bill);
    printf("Total discount Applied: Rs. %.2f \n", totaldiscount);
    printf("Service Charges: Rs. %.2f \n", servicecharge);
    printf("Final Amount : Rs. %.2f \n", finalamount);


    return 0;*/

//**********************************************************************************************************************************************************************************************

        //Salary Calculator
    /*float basicsalry = 0, hra = 0, med = 0, totalallowance = 0, loyalty = 0, deductions = 0, finalsalary = 0;
    int yearofservice = 0;

    printf("Enter the basic salary of the employee: ");
    scanf_s("%f", &basicsalry);

    printf("Enter the years of service of the employee: ");
    scanf_s("%d", &yearofservice);

    hra = basicsalry * 20 / 100;
    med = basicsalry * 10 / 100;
    totalallowance = hra + med;

    if (yearofservice>=10)
    {
        loyalty = 5000;
    }

    finalsalary = basicsalry + totalallowance + loyalty - deductions;

    printf("Salary Breakdown: \n");
    printf("Basic Salary: Rs. %.2f \n", basicsalry);
    printf("Total Allowance: Rs. %.2f \n", totalallowance);
    printf("Loyalty Bonus: Rs. %.2f \n", loyalty);
    printf("Deductions: Rs. %.2f \n", deductions);
    printf("Final Salary: Rs. %.2f \n", finalsalary);

    return 0;*/

//**********************************************************************************************************************************************************************************************

        //SUM OF EVEN NUMBERS
    //int n, i, sum = 0;

    //printf("Enter the number for sum of first natural even numbers: ");
    //scanf_s("%d", &n);

    //for (i = 0; i <= n; i++) {
    //    sum += 2 * i;
    //}
    //printf("The sum of %d even numbers are: %d", n, sum);

    //return 0;

//**********************************************************************************************************************************************************************************************

        //SUM OF ODD NUMBERS
    /*int n, i, sum = 0;

    printf("Enter the number for sum of first natural odd numbers: ");
    scanf_s("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += 2 * i - 1;
    }
    printf("The sum of %d odd numbers are: %d \n", n, sum);

    return 0;*/

//**********************************************************************************************************************************************************************************************

        //SUM OF NATURAL NUMBERS
    /*int n, i, sum = 0;

    printf("Enter the number for sum of first natural numbers: ");
    scanf_s("%d", &n);

    for (i = 0; i <= n; i++) {
        sum += i;
    }
    printf("The sum of %d first natural numbers are: %d \n", n, sum);

    return 0;*/

//**********************************************************************************************************************************************************************************************

            //SUM OF SQUARES
        /*int n, i, sum = 0;

        printf("Enter the number for sum of first natural square numbers: ");
        scanf_s("%d", &n);

        for (i = 0; i <= n; i++) {
            sum += i*i;
        }
        printf("The sum of %d first natural square numbers are: %d \n", n, sum);

        return 0;*/

//**********************************************************************************************************************************************************************************************

        //CHECK PERFECT NUMBER
    /*int n, i, sum = 0;

    printf("Enter the number: ");
    scanf_s("%d", &n);

    for ( i = 1; i < n; i++)
    {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n)
    {
        printf(" %d is a perfect number \n", n);
    }
    else {
        printf(" %d is not a perfect number \n", n);
    }

    return 0;*/

//**********************************************************************************************************************************************************************************************

//example 1
    /*int i = 1, j;
    while (i <= 5) {
        j = 1;
        while (j <= i) {
            printf("%d", j);
            j++;
        }
        printf("\n");
        i++;
    }*/



    //TASK 1
/*int i = 1, j;
while (i <= 5) {
    j = 1;
    while (j <= i) {
        printf("*");
        j++;
    }
    printf("\n");
    i++;
}*/
//example 2
/*int i = 1, j;
do {
    j = 1;
    do {
        printf("*");
        j++;
    } while (j <= i);
    i++;
    printf("\n");
} while (i <= 5);*/


//TASK 2
/*int i = 1, j;
do {
    j = 1;
    do {
        printf("%d",j);
        j++;
    } while (j <= i);
    i++;
    printf("\n");
} while (i <= 5);*/


//example 3
/*int i = 0, j = 0, num = 0;
printf("Enter a number");
scanf_s("%d", &num);
for ( i = 0; i < num; i++)
{
    for (j = 0;j < i;j++) {
        printf("*");
    }
    printf("\n");
}*/


//TASK 3
//int i = 5, j;
//for ( i = 5; i >=1 ; i--)
//{
//	for (j = 1;j <= i;j++) {
//		printf("%d", j);
//	}
//	printf("\n");
//}



    //TASK 4
/*int i, j;
for ( i = 1; i <=5 ; i++)
{
    for (j = 5;j >= 6 - i;j--) {
        printf("%d", j);
    }
    printf("\n");
}*/

//return 0;

//**********************************************************************************************************************************************************************************************

//int i = 1, j, num;
//printf("Enter a Number: ");
//scanf_s("%d", &num);
//
//do {
//    j = 1;
//    do {
//        printf("%d",i);
//        j++;
//    } while (j <= i);
//    i++;
//    printf("\n");
//} while (i <= num);
//
//return 0;

//**********************************************************************************************************************************************************************************************

    /*int i, j;

    for ( i = 1; i <= 4; i++)
    {
        for (j = 1;j <= 4;j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;*/

//**********************************************************************************************************************************************************************************************

	//Grade Calculator
    /*int ans1, ans2, i, j;
	float marks, totalmarks, average, overallaverage=0;

	printf("Enter the number of students: ");
	scanf_s("%d", &ans1);

	for (i = 1; i <= ans1; i++)
	{
		printf("\nStudent %d\n", i);
		printf("Enter the number of subjects: ");
		scanf_s("%d", &ans2);

		totalmarks = 0;

		for (j = 1; j <= ans2; j++)
		{
			printf("Enter the marks of subject %d: ", j);
			scanf_s("%f", &marks); 
			totalmarks += marks; 
		}

		average = totalmarks / ans2;
		overallaverage += average; 

		printf("The total marks of student %d is %.2f\n", i, totalmarks);
		printf("The average marks of student %d is %.2f\n", i, average);
	}

	overallaverage = overallaverage / ans1;
	printf("\nThe overall average of all students is %.2f\n", overallaverage);

    return 0;*/

//**********************************************************************************************************************************************************************************************

    //total votes calculator
    /*int cities, candidates, i, j, votes, cityvotes, totalvotes = 0;

	printf("Enter the number of cities: ");
	scanf_s("%d", &cities);

	for (i = 1; i <= cities; i++)
	{
		printf("\nCity %d\n", i);
		printf("Enter the number of candidates: ");
		scanf_s("%d", &candidates);

		cityvotes = 0;

		for (j = 1; j <= candidates; j++)
		{
			printf("Enter the votes of candidate %d: ", j);
			scanf_s("%d", &votes);
			cityvotes += votes;
		}

		totalvotes += cityvotes;
		printf("The total votes of city %d is %d\n", i, cityvotes);
	}

	printf("\nThe total votes of all cities is %d\n", totalvotes);

	return 0;*/

//**********************************************************************************************************************************************************************************************

            //Assignment 1

// Question 1: Fibonacci Series
    /*int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf_s("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;*/


// Question 2: Count Positive, Negative, and Zeros
    /*int num, positive = 0, negative = 0, zero = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf_s("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;

        printf("Do you want to continue (y/n)? ");
        scanf_s(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("Positive: %d, Negative: %d, Zeros: %d\n", positive, negative, zero);
    return 0;*/


// Question 3: Sum Two Numbers with Do-While Loop
    /*int num1, num2, sum;
    char choice;

    do {
        printf("Enter two numbers: ");
        scanf_s("%d %d", &num1, &num2);
        sum = num1 + num2;
        printf("The sum is: %d\n", sum);

        printf("Do you want to perform the operation again (y/n)? ");
        scanf_s(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    return 0;*/

// Question 4: Reverse Digits of an Integer
    /*int num, reversed = 0;
    printf("Enter an integer: ");
    scanf_s("%d", &num);

    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed Number: %d\n", reversed);
    return 0;*/

// Question 5: Factorial of a Number

        /*int n;
        int fact = 1;

        printf("Enter a number: ");
        scanf_s("%d", &n);

        for (int i = 1; i <= n; i++) {
            fact *= i;
        }

        printf("Factorial: %d\n", fact);
        return 0;*/

// Question 6: Sum of Digits
    /*int num, sum = 0;
    printf("Enter a number: ");
    scanf_s("%d", &num);

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);
    return 0;*/

// Question 7: Sum of Series
    /*int n;
    float sum = 0.0f;
    printf("Enter the value of n: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        float term = 1.0f / (i * i);
        printf("1/%d^%d = %.6f\n", i, i, term);
        sum += term;
    }

    printf("Sum of the series: %.6f\n", sum);
    return 0;*/


// Question 8: Cube of Numbers
    /*int n;
    printf("Enter the number of terms: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Number is: %d and the cube of %d is: %d\n", i, i, i * i * i);
    }
    return 0;*/

//**********************************************************************************************************************************************************************************************

	//Problem 1: Delivery Charges
//int amt, del;
//printf("Enter user's purchase Amount: ");
//scanf_s("%d", &amt);
//if (amt > 1000) {
//    del = amt;
//}
//else {
//    del = amt + 150;
//}
//printf("\n===========================\n");
//printf("Delivery charges: %d Rs\n", del);
//printf("===========================\n");
//return 0;

//**********************************************************************************************************************************************************************************************

	    //Problem 2: Least Significant and Most Significant Digit
	/*int num, msd, lsd;
    printf("===========================\n");
	printf("\nEnter a number: "); 
	scanf_s("%d", &num); 
	lsd = num % 10; 
	while (num >= 10) {
		num /= 10; 
	}
	msd = num; 
    printf("LSD is %d and MSD is %d\n", lsd, msd);
	printf("\n===========================\n");
	return 0;*/


 //}//end of main

//**********************************************************************************************************************************************************************************************

        //Arrays
    //example 1
 /*int main()
 {
     int marks[5] = {89,65,87,80,70};
	 printf("Marks of subject 1: %d\n", marks[0]);
	 printf("Marks of subject 2: %d\n", marks[1]);
	 printf("Marks of subject 3: %d\n", marks[2]);
	 printf("Marks of subject 4: %d\n", marks[3]);
	 printf("Marks of subject 5: %d\n", marks[4]);
	 return 0;

 }*/

    //task 01
 /*int main() {
	 int temp[7] = { 25, 27, 30, 32, 35, 36, 38 };
	 printf("Temperature of Monday: %d\n", temp[0]);
	 printf("Temperature of Tuesday: %d\n", temp[1]);
	 printf("Temperature of Wednesday: %d\n", temp[2]);
	 printf("Temperature of Thursday: %d\n", temp[3]);
	 printf("Temperature of Friday: %d\n", temp[4]);
	 printf("Temperature of Saturday: %d\n", temp[5]);
	 printf("Temperature of Sunday: %d\n", temp[6]);
	 return 0;
 }*/

    //example 02
 /*int main() {
	 int marks[10], i, n, sum=0, average;
	 printf("Enter the number: ");
	 scanf_s("%d", &n);
     for ( i = 0; i < n; ++i)
     {
         printf("Enter marks: ", i + 1);
		 scanf_s("%d", &marks[i]);
		 sum += marks[i];
     }
	 average = sum / n;
	 printf("Average marks: %d\n", average);
	 return 0;
 }*/

    //example 02
 /*int main() {
     int array[5];
     int square[5];
     int i = 0;
     for ( i = 0; i < 5; i++)
     {
         printf("Enter the value for array: ");
		 scanf_s("%d", &array[i]);
     }
	 for (i = 0; i < 5; i++)
	 {
		 square[i] = array[i] * array[i];
		 printf("Square of %d is %d\n", array[i], square[i]);
	 }
	 return 0;
 }*/

    //task 02
 /*int main() {
     int n, i;
     float arr[100], sum = 0.0, avg;
     printf("Enter the number of elements: ");
     scanf_s("%d", &n);
     for (i = 0; i < n; ++i) {
         printf("%d. Enter number: ", i + 1);
         scanf_s("%f", &arr[i]);
         sum += arr[i];
     }
     avg = sum / n;
     printf("Average = %.2f", avg);
     return 0;
 }*/

    //example 03
 /*int main() {
     int array[10];
     int i = 0;
	 for (i = 0; i < 10; i++)
	 {
		 printf("Enter the value for array: ");
		 scanf_s("%d", &array[i]);
	 }
     for ( i = 0; i < 10; i++)
     {
         if (array[i] % 2 == 0) {
			 printf("%d is even\n", array[i]);
		 }
		 else {
			 printf("%d is odd\n", array[i]);
         }
     }
	 return 0;
 }*/

    //task 03
 /*int main() {
     int array[10], i, max;
     printf("Enter 10 elements:\n");
     for (i = 0; i < 10; i++) {
         scanf_s("%d", &array[i]);
     }
     max = array[0];
     for (i = 1; i < 10; i++) {
         if (array[i] > max) {
             max = array[i];
         }
     }
     printf("Maximum element: %d\n", max);
     return 0;
 }*/

    //example 04
 /*float getAverage(int array[], int arraySize);
 int main() {
	 int marks[5] = { 0, 0, 0, 0, 0 };
     int i = 0;
     float average = 0.0;
	 for (i = 0; i < 5; i++)
	 {
		 scanf_s("%d", &marks[i]);
	 }
	 average = getAverage(marks, 5);
	 printf("Average marks: %.2f\n", average);
	 return 0;
 }
 float getAverage(int array[], int arraySize) {
	 int sum = 0;
	 float average = 0.0;
	 for (int i = 0; i < arraySize; i++) {
		 sum += array[i];
	 }
	 average = sum / arraySize;
	 return average;
 }*/

    //task 04
 /*float calculate_average(float temps[], int size) {
     float sum = 0.0;
	 float average = 0.0;
     for (int i = 0; i < size; i++) {
         sum += temps[i];
     }
     average = sum / size;
	 return average;
 }
 int main() {
     float temperatures[7];
     printf("Enter temperatures for each day of the week:\n");
     for (int i = 0; i < 7; i++) {
         printf("Day %d: ", i + 1);
         scanf_s("%f", &temperatures[i]);
     }
     float average_temp = calculate_average(temperatures, 7);
     printf("Average temperature of the week: %.2f\n", average_temp);
     return 0;
 }*/

//**********************************************************************************************************************************************************************************************

        //Assignment 2
    
    //Question 1
//int main() {
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j < 5; j++) {
//            int n;
//            n = i - j;
//            if (n<0)
//            {
//                n = -1 * n;
//            }
//            printf("%d ",n);
//        }
//        printf("\n");
//    }
//    return 0;
//}

    //Question 2
//int main() {
//    int N;
//    printf("For N = ");
//    scanf_s("%d", &N);
//    for (int i = 0; i < N; i++) {
//        int num = i, binary[32], index = 0;
//        if (num == 0) {
//            printf("0");
//        }
//        else {
//            while (num > 0) {
//                binary[index++] = num % 2;
//                num = num / 2;
//            }
//            for (int j = index - 1; j >= 0; j--) {
//                printf("%d", binary[j]);
//            }
//        }
//        if (i < N - 1) {
//            printf(",");
//        }
//    }
//    printf("\n");
//    return 0;
//}

	//Question 3
//int main() {
//    int n;
//    int persistence = 0;
//    printf("Enter a positive integer: ");
//    scanf_s("%d", &n);
//    if (n <= 0) {
//        printf("Please enter a positive integer.\n");
//        return 1;
//    }
//    printf("Sequence: %d", n);
//    while (n >= 10) {
//        int product = 1;
//        int temp = n;
//        while (temp > 0) {
//            product = product * (temp % 10);  
//            temp = temp / 10;
//        }
//        n = product;
//        persistence++;
//        printf(" , %d", n);
//    }
//    printf("\nMultiplicative persistence: %d\n", persistence);
//    printf("Multiplicative digital root: %d\n", n);
//    return 0;
//}

	//Question 4
//int main() {
//    int n;
//    printf("Enter a positive integer: ");
//    scanf_s("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        for (int j = i; j < n; j++) {
//            printf("  ");
//        }
//        for (int k = 1; k <= (2 * i - 1); k++) {
//            if (k == 1 || k == (2 * i - 1) || i == n) {
//                printf("* ");
//            }
//            else {
//                printf("  ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

	//Question 5
//int main() {
//    int n;
//    printf("For N = ");
//    scanf_s("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (int i = n - 1; i >= 1; i--) {
//        for (int j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

	//Question 6
//int main() {
//    for (int i = 1; i <= 4; i++) {
//        for (int j = 1; j <= 12; j++) {
//            if (i == 1 || i == 4 || j == 1 || j == 12) {
//                printf("*");
//            }
//            else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

	//Question 7
//int main() {
//    int n, stars = 1;
//    printf("Rows = ");
//    scanf_s("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= stars; j++) {
//            printf("*");
//        }
//        printf("\n");
//        stars = stars * 2;
//    }
//    return 0;
//}

    //Question 8
//int main() {
//    for (int i = 1; i <= 5; i++) {
//        for (int j = 1; j <= 5 - i; j++) {
//            printf("  ");
//        }
//        for (int j = 1; j <= 2 * i - 1; j++) {
//            if (j == 1 || j == 2 * i - 1) {
//                printf("* ");
//            }
//            else {
//                printf("  ");
//            }
//        }
//        printf("\n");
//    }
//    for (int i = 5 - 1; i >= 1; i--) {
//        for (int j = 1; j <= 5 - i; j++) {
//            printf("  ");
//        }
//        for (int j = 1; j <= 2 * i - 1; j++) {
//            if (j == 1 || j == 2 * i - 1) {
//                printf("* ");
//            }
//            else {
//                printf("  ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

	//Question 9
//int main() {
//    for (int i = 1; i <= 5; i++) {
//        for (int j = 1; j <= 5 - i; j++) {
//            printf(" ");
//        }
//        for (int j = 1; j <= 2 * i - 1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//   for (int i = 5 - 1; i >= 1; i--) {
//        for (int j = 1; j <= 5 - i; j++) {
//            printf(" ");
//        }
//        for (int j = 1; j <= 2 * i - 1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

