#include <iostream>
#include<stdio.h>  
#include<conio.h>  
#include<math.h>  
#include<stdlib.h>  
using namespace std;

//Global Variables
int v1;
int v2;
int ans;

//function operators
void add();
void sub();
void multi();
void div();
void exit();

//Choose the operation
void chooseOP () {
    int opr;
    do {
        std::cout << "Slect any operation from the C++ Calculator"
        "\n1 = Addition"
        "\n2 = Subtraction"
        "\n3 = Multiplication"
        "\n4 = Division"
        "\n5 = Exit"
        "\n\n Make a choice: ";
        cin >> opr;

        switch (opr) {
            case 1:
                add(); //call add() function to find the addition
                break;
            case 2:
                sub(); //call sub() function to find the subtraction
                break;
            case 3:
                multi(); //call multi() function to find the multiplication
                break;
            case 4:
                div(); //call div() function to find the division
                break;
            case 5:
                exit(0); //to terminate the program
                break;
            default :
                std::cout << "Something is wrong..!!";
                break;
        }
        std::cout << "\n----------------------------------\n";
    } while (opr != 5);
    getch();
}

void add() {
    std::cout << "Enter the first value: \n";
    std::cin >> v1;

    std::cout << "Enter the second value: \n";
    std::cin >> v2;

    std::cout << v1 << " + " << v2 << " = ";
    ans = v1 + v2;
    std::cout << ans;
}

void sub() {
    std::cout << "Enter the first value: \n";
    std::cin >> v1;

    std::cout << "Enter the second value: \n";
    std::cin >> v2;

    std::cout << v1 << " - " << v2 << " = ";
    ans = v1 - v2;
    std::cout << ans;
}

void multi() {
    std::cout << "Enter the first value: \n";
    std::cin >> v1;

    std::cout << "Enter the second value: \n";
    std::cin >> v2;

    std::cout << v1 << " * " << v2 << " = ";
    ans = v1 * v2;
    std::cout << ans;
}

void div() {
    std::cout << "Enter the first value: \n";
    std::cin >> v1;

    std::cout << "Enter the second value: \n";
    std::cin >> v2;

    std::cout << v1 << " / " << v2 << " = ";
    ans = v1 / v2;
    std::cout << ans;
}

void exit() {
    exit(0);
}

int main () {
    chooseOP();
    add();
    sub();
    multi();
    div();
    exit();
}