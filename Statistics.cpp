#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Function Definition
void NBA_Statistics() 
{
	double FGP = 0.0,      //Field Goal Percentage
		FTP = 0.0,      //Free Throw Percentage
		TSP = 0.0,      //True Shooting Percentage
		TOP = 0.0,      //Turnover Percentange
		result = 0.0;

	double FGA = 0.0,      //Field Goal Attempts
		FTA = 0.0,      //Freethrow Attempts
		PTS = 0.0,      //Points
		AST = 0.0,      //Assits
		TOV = 0.0,      //Turnovers
		FG = 0.0,       //Field Goal
		FT = 0.0;       //Freethrows

	int user_choice; //Store users choice

	string name;     //Holds Players name
	string again;    //Holds user choice to leave program


	do
	{
		cout << endl;
		cout << setw(64) << "NBA Statistics Menu\n";
		cout << setw(78) << "-----------------------------------------------\n";
		cout << setw(77) << "Please choose one of the following choices:\n";

		cout << endl;

		cout << setw(67) << "1) Field Goal Percentage\n";
		cout << setw(67) << "2) Free Throw Percentage\n";
		cout << setw(70) << "3) True Shooting Percentage\n";
		cout << setw(65) << "4) Turnover Percentage\n";

		cout << endl;

		cout << setw(71) << "Enter in choice(1, 2, 3, or 4): ";
		cin >> user_choice;

		//Input validation
		while (user_choice > 4)
		{
			cout << setw(77) << "Invalid Choice! Please choose (1, 2, 3, or 4): ";
			cin >> user_choice;
		}

		//Menu Choices(Switch Case)
		switch (user_choice)
		{
		case 1:
			cout << endl;
			cout << setw(62) << "Enter in players name: ";
			cin.ignore();  //ignore or clear one or more characters from the input buffer
			getline(cin, name);
			cout << setw(66) << "Enter in field goals made: ";
			cin >> FG;
			cout << setw(69) << "Enter in field goal attempts: ";
			cin >> FGA;

			FGP = FG / FGA * 100;                       //Calculate Field Goal Percentage

			cout << fixed << setprecision(1) << showpoint;
			cout << endl;
			cout << setw(54) << "Player: " << name << endl;
			cout << setw(60) << "Field Goal %: " << FGP << endl;
			break;

		case 2:
			cout << endl;
			cout << setw(62) << "Enter in Players name: ";
			cin.ignore();  //ignore or clear one or more characters from the input buffer
			getline(cin, name);
			cout << setw(66) << "Enter in Free throws made: ";
			cin >> FT;
			cout << setw(69) << "Enter in field goal attempts: ";
			cin >> FTA;

			FTP = FT / FTA * 100;                       //Calculate Free Throw Percentage

			cout << fixed << setprecision(1) << showpoint;
			cout << endl;
			cout << setw(54) << "Player: " << name << endl;
			cout << setw(60) << "Free throw %: " << FTP << endl;
			break;

		case 3:
			cout << endl;
			cout << setw(62) << "Enter in Players name: ";
			cin.ignore();  //ignore or clear one or more characters from the input buffer
			getline(cin, name);
			cout << setw(62) << "Enter in total points: ";
			cin >> PTS;
			cout << setw(69) << "Enter in field goal attempts: ";
			cin >> FGA;
			cout << setw(69) << "Enter in free throw attempts: ";
			cin >> FTA;

			TSP = PTS / (2 * (FGA + 0.475 * FTA));       //Calculate True Shooting Percentage
			result = TSP * 100;

			cout << fixed << setprecision(1) << showpoint;
			cout << endl;
			cout << setw(54) << "Player: " << name << endl;
			cout << setw(60) << "True Shooting %: " << result << endl;
			break;

		case 4:
			cout << endl;
			cout << setw(62) << "Enter in Players name: ";
			cin.ignore();  //ignore or clear one or more characters from the input buffer
			getline(cin, name);
			cout << setw(59) << "Enter in turnovers: ";
			cin >> TOV;
			cout << setw(69) << "Enter in field goal attepmts: ";
			cin >> FGA;
			cout << setw(69) << "Enter in free throw attempts: ";
			cin >> FTA;
			cout << setw(57) << "Enter in assists: ";
			cin >> AST;

			TOP = TOV / (FGA + 0.475 * FTA + TOV);         //Calculate Turnover Percentage
			result = TOP * 100;

			cout << fixed << setprecision(1) << showpoint;
			cout << endl;
			cout << setw(54) << "Player: " << name << endl;
			cout << setw(58) << "Turnover %: " << result << endl;
			break;
		}

		cout << endl;

		cout << setw(69) << "Want to try again?(Yes/No): ";
		cin >> again;

	} while (again == "Yes" || again == "yes");
}

int main()
{

	NBA_Statistics(); //Calls Function

	cout << endl;
	cout << "\t\t\t\t\tThank you for using NBA Statistics";

	return 0;
}



