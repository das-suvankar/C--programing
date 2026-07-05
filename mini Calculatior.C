#include<stdio.h>

int add(int a, int b){
    return a + b;
}

int substract(int a, int b){
    return a - b;
}

int multi(int a, int b){
    return a*b;
}

int divide(int a, int b){
    if(b == 0){
        printf("Division by zero is not possible\n");
    }
    return a/b;
}


int square(int a){
    return a * a;
}

int factorial(int a){
    int fact = 1;
    for (int i = 1; i<= a; i++){
        fact = fact * i;
        printf("The factorial is: %d\n", fact);
    }
    return fact;
}


int main(){
    printf("Welcome to the mini calculator made by suvankar\n");
    printf("What do you want to do: sum, multiplication, Substract, Divide\n");
    int a;
    printf("Enter Your Number a: ");
    scanf("%d", &a);
    int b;
    printf("Enter your number b: ");
    scanf("%d", &b);
    char choice;
    printf("Enter operation(a for sum, s for substract, m for multiplication, d for divid): ");
    scanf(" %c", &choice);
    switch(choice){
        case 'a':{
            add(a, b);
            printf("the sum is: %d", add(a, b));
            break;
        }
        case 's':{
            substract(a, b);
            printf("The substract is: %d", substract(a, b));
            break;
        }
        case 'm':{
            multi(a, b);
            printf("The multiplication is: %d", multi(a, b));
            break;
        }
        case 'd':{
            divide(a, b);
            printf("The divide is: %d", divide(a, b));
            break;
        }
        case 'p':{
            square(a);
            printf("The sqaue is: %d", square(a));
            break;
        }
        case 'f':{
            factorial(a);
            break;
        }
        default:{
            printf("Error!");
            break;
        }
    }
    return 0;
}
