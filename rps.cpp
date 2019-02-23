#include<bits/stdc++.h>
using namespace std;

/**
 *
 * @author Rajput
 */
int main()
{
			int count = 3;
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
            } else {
                cout<<"Computer wins!";
            }
        } else if (userChoice == "paper") {
            if (compChoice == "rock") {
                cout<<"You win!";
            } else {
cout<<"Computer wins!";
            }
        } else if (userChoice == "scissors") {
            if (compChoice == "rock") {
                cout<<"You win!";
            } else {
                cout<<"Computer wins!";
            }
        }
		}
    return 0;
}
