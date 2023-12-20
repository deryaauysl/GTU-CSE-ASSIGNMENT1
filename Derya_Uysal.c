#include <stdio.h>

//I defined my functions here.
void addfunction();
void subfunction();
void multiplyfunction();
void divfunction();
void powfunction();
void avgfunction();
void maxfunction();

int main()
{
    printf("%% WELCOME TO GTU CALCULATOR MACHINE %%\n");
    printf("%% STUDENT NAME: DERYA UYSAL %%\n");
    printf("%% PLEASE SELECT FROM THE FOLLOWING %%\n");
    printf("%% MENU : %%\n");
    printf("(1) ADD TWO NUMBERS\n");
    printf("(2) SUBTRACT TWO NUMBERS\n");
    printf("(3) MULTIPLY TWO NUMBERS\n");
    printf("(4) DIVIDE TWO NUMBERS\n");
    printf("(5) TAKE THE NTH POWER OF A NUMBER\n");
    printf("(6) FIND AVERAGE OF NUMBERS INPUTTED\n");
    printf("(7) FIND THE MAXIMUM OF NUMBERS INPUTTED\n");
    printf("(0) EXIT\n");

    int num;
    printf("PLEASE SELECT: ");
        scanf("%d",&num);

    //After selecting the number, I actualize my functions inside the 'if' condition.

    if(num == 1)  //I call addition function
    {
        addfunction();
    }
    else if(num == 2) //if num equal 2 , I call subtraction function
    {
        subfunction();
    }
    else if(num == 3) //I call multiplication function
    {
        multiplyfunction();
    }
    else if(num == 4) //I call division function
    {
        divfunction();
    }
    else if(num == 5) //  I call exponentiation function.
    {
        powfunction();
    }
    else if(num == 6)  // ,In the lines below ,I coded finding average number in the taken values ,in this line I call this function.
    {
        avgfunction();
    }
    else if(num == 7) // In the lines below, I coded finding maximum number in the taken values ,in this line I call this function.
    {
        maxfunction();
    }
    else if(num == 0) // If the number is zero, ı exit in the program.
    {
        printf("EXIT");
        return 0;
    }
    else // In the other situaitons , I can't accepted these numbers.
    {
        printf("Wrong instruction,try again!");
        return 0;
    }
}

void addfunction( ) // I take 2 numbers from user and added them.
{
    float a,b;
    float result;
    
    printf("Select your numbers:\n"); // I take 2 numbers from user.
            scanf("%f %f",&a,&b);
    
            result = a + b; // add 2 number

            printf("%.2f + %.2f =  %.2f", a,b,result); // print result
}

void subfunction() // I take 2 numbers from user and subtracted them.
{
    float a,b;
    float result;
    
    printf("Select your numbers:\n"); // I take 2 numbers from user.
            scanf("%f %f",&a,&b);

            result = a - b; // subtract 2 number

            printf("%.2f - %.2f =  %.2f", a,b,result); // print result
}

void multiplyfunction() // I take 2 numbers from user and multiplied them.
{
    float a,b;
    float result;
    printf("Select your numbers:\n");  // I take 2 numbers from user.
            scanf("%f %f",&a,&b);
    
            result = a*b;  // multiply 2 number
    
            printf("%.2f * %.2f =  %.2f", a,b, result);  // print result
}

void divfunction()  // I take 2 numbers from user and divided them
{
    float a,b;
    float result;
    printf("Select your numbers:\n");  // I take 2 numbers from user.
            scanf("%f %f",&a,&b);
        if (b== 0)
        {
            printf("Undefined number");
            return 0;
        }
        
            result = a/b;   // divide 2 number
    
            printf("%.2f / %.2f =  %.2f",a,b,result); // print result
}

void powfunction() // I take number's base and power number from user. I use in the function to finding result.
{
    float powint,base;
    float result = 1.0;

    printf("Select your base number:\n"); // take base number from user
            scanf("%f", &base);
    printf("Select your nth number:\n"); // take power number from user
            scanf("%f", &powint);

        for(int i=0; i<powint; i++) // I use for loop to find final result
        {
            result = result * base; // Example 3 x 3 x 3
        }

        printf("%.2f ^ %.2f =  %.2f",base,powint,result); // print result
}

void avgfunction() // I take number (n) that user determined. Then I wanted to enter as many numbers as the given number to divide number(n) to finding average number.
{
    int n;
    float result = 0.0 ; 
    float average;

    printf("How many numbers do you want?\n"); // I take array size from user
    scanf("%d", &n);

    float numbers[n];

    for (int i = 0; i < n; i++) // I control how many times I add indexes to result
    {
        printf("Number %d: ", i+1); // I take array index from user gradually
        scanf("%f", &numbers[i]);
        result = result + numbers[i]; // I add array indexes
    }

    if (n > 0) 
    {
        average = result / n;  // result divide array size
        printf("The average of the numbers: %.2f", average); // print result
    }
            
}

void maxfunction()
{
    int n;
    float max;

    printf("How many numbers do you want?\n"); // I take array size from user
    scanf("%d", &n);

    float numbers[n];
    for (int i = 0; i < n; i++)  // I control how many times I take indexes from user
    {
        printf("Number %d: ", i+1); // I take array indexes from user
        scanf("%f", &numbers[i]);
    }

    max = numbers[0]; // I temporarily assigned the first index of the array to max

    for (int i = 0; i < n; i++) 
    {
        if (max < numbers[i])
        {
            max = numbers[i]; // If numbers[i] grater than max ı assigned to max
        }   
    }

    printf("The maximum value of the numbers: %.2f", max);     
    
}