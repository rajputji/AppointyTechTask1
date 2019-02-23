#include<bits/stdc++.h>
using namespace std;

/**
 *
 * @author Rajput
 */
int main()
{
			int count = 3;
			int c = 0;
			int u = 0;
			while(count--)
		{
		system("cls");
        cout<<"\t\t Rock-Paper-Scissors Console Game!";       
        string compChoice;
        string userChoice;
        cout<<"\n\n\t\tRock, Paper, or Scissors?";
        cin>>userChoice;
        
        for(int i=0;i<userChoice.length();i++)
		{
  			 userChoice[i] = tolower(userChoice[i]);
		}
//		cout<<userChoice<<endl;
        int r = (int) (1 + ( std::rand() % (3)));

cout<<r<<endl;
        if (r == 1) {
            compChoice = "rock";
        } else if (r == 2) {
            compChoice = "paper";
        } else {
            compChoice = "scissors";
        }
 cout<<"Computer: "<< compChoice;

        if (userChoice == compChoice) {
            cout<<"The result is a tie!";
        } else if (userChoice == "rock")
		{
            if (compChoice == "scissors") {
                cout<<"You win!";
                u++ ;
            } else {
                cout<<"Computer wins!";c++;
            }
        } else if (userChoice == "paper") {
            if (compChoice == "rock") {
                cout<<"You win!";
                u++;
            } else {
cout<<"Computer wins!";c++;
            }
        } else if (userChoice == "scissors") {
            if (compChoice == "rock") {
                cout<<"You win!";u++;
            } else {
                cout<<"Computer wins!";c++;
            }
        }
		}
		if(c==u)
		{
			cout<<"ITS A DRAW";
		}
		else
		{
			if(c>u)
			{
				cout<<"BEST of 3 : Computer Wins";
			}
			else
			{
								cout<<"BEST of 3 : You Wins";

			}
			
		}
    return 0;
}
