#include <iostream>
using namespace std;
int main()
{
    int Raja = 1000;
    int Mantri = 800;
    int Sipayi = 500;
    int Chor = 0;
    string name; // 1 , name2 , name3 , name4;
    int number1, number2;
    cout << "Enter first player name : ";
    cin >> name;
    cout << "Enter second player name : ";
    cin >> name;
    cout << "Enter third  player name : ";
    cin >> name;
    cout << "Enter fourth player name : ";
    cin >> name;
    // cout << "Enter the first number between 0 to 9 : ";
    // cin >> number1;
    // cout << "Enter the second number between 0 to 9 : ";
    // cin >> number2;
    do
    {
        cout << "Enter the first number between 0 to 9 : ";
        cin >> number1;
        cout << "Enter the second number between 0 to 9 : ";
        cin >> number2;
         if (number1 == -1) // Check if the user wants to exit
            break;
        if (number1 % 2 == 0)
        {

            if (((number1 + number2) % number1) == 0)
            {
                cout << "Raja"
                     << ":" << Raja << endl;
                     break;
            }
            else if (((number1 + number2) % number1) == 0 && (((number1 + number2) % number1) >= number2))
            {
                cout << "Mantri"
                     << ":" << Mantri << endl;
                     break;
            }
            else if (((number1 + number2) % number1) == 0 && (((number1 + number2) % number1) <= number2))
            {
                cout << "Sipayi"
                     << ":" << Sipayi << endl;
                     break;
            }
            else
            {
                cout << "Chor"
                     << ":" << Chor << endl;
                     break;
            }
        }
    } while (true);
}
