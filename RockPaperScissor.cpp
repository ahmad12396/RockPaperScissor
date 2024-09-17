#include <iostream>
#include <ctime>
#include <string>
using namespace std;
char condition;
//1 vs computer
char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);
// 1 vs 1
void chooseWinner(char player1, char player2 ,string name1 ,string name2);
string name1, name2;
int main()
{
    A1:
    int p;
do
{
    cout << "******************************\n";
    cout << "*  Rock-Paper-Scissors Game  *\n";
    cout << "******************************\n";
    cout << "*   Select one of Following  *\n";
    cout << "*   1: 1 Player vs 1 Player  *\n";
    cout << "*   2: 1 Player vs Computer  *\n";
    cout << "******************************\n";
    // Get user choice from above of the following
    cin >> p;
    // system("cls"); // Clear screen
} while (p == 1 && p == 2);
// Do this untill the user enters the above condition

// Apply condition on choice
switch (p)
{
case 1:

    // To take input as character from player 1
    char player1; 
    char player2; 
    // To take input as character from player 2
    
    // Get full-name of the First player
    cout << "Enter Player 1's Name: ";
    getline(cin>>ws, name1); 

   // Get full-name of the Second player
    cout << "Enter Player 2's Name: ";
    getline(cin>>ws, name2); 
   A2: 
    // Return the First person's turn
    cout << name1 <<"'s Turn"; 

    // Store value of users character in player1 from getUserChoice() Function
    player1 = getuserchoice(); 
    system("cls"); // Clear screen

    // Return the Second person's turn
    cout << name2 << "'s Turn";

    // Store value of users character in player2 from getUserChoice() Function
    player2 = getuserchoice();
    system("cls"); // Clear screen

    // Shows name of First person 
    cout << name1 << "'s choice is: ";

    // Shows choice of First person 
    showchoice(player1);

    // Shows name of Second person 
    cout << name2 << "'s choice is: ";

    // Shows choice of Second person
    showchoice(player2); 

    chooseWinner(player1, player2,name1,name2);// choose who is the winner from 
    char option;
    cout << "\nDo you want to go back to Menu or to Restart this game\n";// used to play again game
    cout << "Press 'M' for Menu\n";
    cout << "Press 'R' for Restart\n";
    cout << "Press 'E' for Exit\n";
    cin >> option;
    option = toupper(option);
    switch (option)
    {
    case 'M':
        system("cls");
        goto A1;//location to restart
        break;
    
    case 'R':
        system("cls");
        goto A2;
        break;
    
    case 'E':
        system("cls");
        break;
    default:
        cout << "Enter valid character";
        break;
    }
    return 0;
    break;
case 2:
A3:
    char player;
    char computer;

    // Store value of users character in player from getUserChoice() Function
    player = getuserchoice();
    system("cls"); // Clear screen
    cout << "Your choice is: ";

    // Shows choice of person 
    showchoice(player);

    // Store value of Computers character in computer from getcomputerChoice() Function
    computer = getcomputerchoice();
    cout << "Computer choice is: ";

    // Shows choice of Computer
    showchoice(computer);

    choosewinner(player, computer);// choose who is the winner from 
    char option2;
    cout << "\nDo you want to go back to Menu or to Restart this game\n";// used to play again game
    cout << "Press 'M' for Menu\n";
    cout << "Press 'R' for Restart\n";
    cout << "Press 'E' for Exit\n";
    cin >> option2;
    option2 = toupper(option2);
    switch (option2)
    {
    case 'M':
        system("cls");
        goto A1;
        break;
    
    case 'R':
        system("cls");
        goto A3;
        break;
    
    case 'E':
        system("cls");
        break;
    default:
        cout << "Enter valid character";
        break;
    }
    return 0;
    
    break;

default:
    cout << "Enter valid Number";// If user enters wrong condition than show this
    break;
}
    
}

// 1 vs computer's functions
char getuserchoice()// get choice
{
    char player;
    do
    {
        cout << "\n****************************\n";
        cout << "* Rock-Paper-Scissors Game *\n";
        cout << "****************************\n";
        cout << "Enter one of the following\n";
        cout << "'r' For Rock\n";
        cout << "'p' For Paper\n";
        cout << "'s' For Scissor\n";
        cout << "****************************\n";
        cin >> player;
        player = tolower(player);
    } while (player != 'r' && player != 'p' && player != 's');
    return player;
}

// 1 vs computer's functions
char getcomputerchoice()//get computer choice by using rand function for generating random numbers 
{
    srand(time(0));
    int num = rand() % 3 + 1;
    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    default:
        break;
    }
}

// 1 vs computer's functions
void showchoice(char choice)// choice
{
    switch (choice)
    {
    case 'r':
        cout << "Rock\n";
        break;
    case 'p':
        cout << "Paper\n";
        break;
    case 's':
        cout << "Scissors\n";
        break;
    default: cout << "Enter valid character";
        break;
    }
}

// 1 vs computer's functions
void choosewinner(char player, char computer)//winning conditions 
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << "It's a Tie!\n";
        }
        else if (computer == 'p')
        {
            cout << "You Lose!\n";
        }
        else
        {
            cout << "You win!\n";
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            cout << "You Win!\n";
        }
        else if (computer == 'p')
        {
            cout << "It's a Tie!\n";
        }
        else
        {
            cout << "You Lose!\n";
        }
        break;
    case 's':
        if (computer == 'r')
        {
            cout << "You Lose!\n";
        }
        else if (computer == 'p')
        {
            cout << "You Win!\n";
        }
        else
        {
            cout << "It's a Tie!\n";
        }
        break;

    default:
        break;
    }   
}


// 1 vs 1 player's functions
void chooseWinner(char player1, char player2, string name1, string name2) {
    if (player1 == player2) {
        cout << "It's a Tie!\n";
    } else if ((player1 == 'r' && player2 == 's') || //condition for winning of 1 player
               (player1 == 'p' && player2 == 'r') || 
               (player1 == 's' && player2 == 'p')) {
        cout << name1 <<" Wins!\n";
    } else {
        cout << name2 <<" Wins!\n";
    }
}
