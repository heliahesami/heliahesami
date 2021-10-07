#include <iostream>

using namespace std;



//helia hesami//
int main()

{

    float a, b, c;

    string firstName, lastName;




    cout << "First name: ";

    cin >> firstName;

    cout << "Last name: ";

    cin >> lastName;




    cout << "First grade: ";

    cin >> a;

    cout << "Second grade: ";

    cin >> b;

    cout << "Third grade: ";

    cin >> c;




    cout << "\nStudent: " << firstName << " " << lastName << "\nAverage: ";




    float average = (a + b + c) / 3;

    cout << average << "\nStatus: ";




    if (average > 17)

    {

        cout << "Great";

    }

    else if (average >= 12)

    {

        cout << "Normal";

    }

    else

    {

        cout << "Fail";

    }




    return 0;

}