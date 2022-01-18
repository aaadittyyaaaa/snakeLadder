#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include <time.h>
#include <conio.h>
using namespace std;
class snakeladder{
public :
    int die;
    int step1 ;
    int step2 ;
    int pos_player1 = 0;
    int pos_player2 = 0  ;
    int roll()
    {
       srand(time(0)) ;
        die = 1 + (rand()%6) ;
        return die ;
    }
    int currentpos1()
    {
        cout<<"player 1 : Press any key to roll a die "<<endl ;
        getch();
        srand(time(0)) ;
         int die1 = roll()  ;
        cout<< die1<<endl ;
        pos_player1 = pos_player1 + die1 ;
        cout<<pos_player1 << endl ;
        switch(pos_player1)
        {
        case 7 :
            {
                cout<< "you have climbed a ladder " ;
                pos_player1 = 95 ;
                break ;
            }
        case 10:
            {
                cout<< "you have climbed a ladder " ;
                pos_player1 = 51 ;
                break ;
            }
        case 21:
            {
                cout<< "you have climbed a ladder " ;
                pos_player1 = 48 ;
                break ;
            }
        case 54:
            {
                cout<< "you have climbed a ladder " ;
                pos_player1 = 72 ;
                break ;
            }
        case 99:
            {
                cout<< "you have been bitten by a snake " ;
                pos_player1 = 2 ;
                break ;
            }
        case 88:
            {
                cout<< "you have been bitten by a snake " ;
                pos_player1 = 62 ;
                break ;
            }
        case 51:
            {
                cout<< "you have been bitten by a snake " ;
                pos_player1 =43 ;
                break ;
            }
        case 25:
            {
                cout<< "you have been bitten by a snake " ;
                pos_player1 = 5 ;
                break ;
            }
        }
        if(pos_player1>100)
        {
            return 1;
        }
        else
        {
            step1 = step1 + 1 ;
            cout<<pos_player1<<endl;
            getch();
            system("cls") ;
            return 0 ;
        }
    }
    int currentpos2()
    {
        cout<<"player 2 : Press any key to roll a die "<<endl ;
        getch();

        int die2 = roll();
        cout<< die2<<endl ;
        pos_player2 = pos_player2 + die2 ;
        cout<<pos_player2 << endl ;
        switch(pos_player2)
        {
        case 7 :
            {
                cout<< "you have climbed a ladder " ;
                pos_player2 = 95 ;
                break ;
            }
        case 10:
            {
                cout<< "you have climbed a ladder " ;
                pos_player2 = 51 ;
                break ;
            }
        case 21:
            {
                cout<< "you have climbed a ladder " ;
                pos_player2 = 48 ;
                break ;
            }
        case 54:
            {
                cout<< "you have climbed a ladder " ;
                pos_player2 = 72 ;
                break ;
            }
        case 99:
            {
                cout<< "you have been bitten by a snake " ;
                pos_player2 = 2 ;
                break ;
            }
        case 88:
            {
                cout<< "you have been bitten by a snake " ;
                pos_player2 = 62 ;
                break ;
            }
        case 51:
            {
                cout<< "you have been bitten by a snake " ;
                pos_player2 =43 ;
                break ;
            }
        case 25:
            {
                cout<< "you have been bitten by a snake " ;
                pos_player2 = 5 ;
                break ;
            }
        }
        if(pos_player2>100)
        {
            return 1;
        }
        else
        {
            cout<<pos_player2<<endl;
            step2 = step2 + 1 ;
            getch();
            system("cls")  ;
            return 0 ;
        }

    }
};
int main()
{
    snakeladder p1 ;
    snakeladder p2 ;
    cout<<"Welcome to the game :"<<endl<<"Press any key to continue"<<endl ;
    getch() ;
    system("cls") ;
    int endp1 = 0;
    int endp2 = 0 ;
    while(endp1 == 0 && endp2 == 0)
    {
        //
        endp1 =  p1.currentpos1() ;
        endp2 =  p2.currentpos2() ;

    }
    if(p1.step1<p2.step2)
    {
        cout<<"Player1 won" ;
    }
    else
    {
        cout<<"Player2 won" ;
    }



}
