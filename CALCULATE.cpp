#include <iostream>

#include <math.h>

using namespace std;
////HELIA HESAMI
///
int main ()



{

  double a, b;

  string input;




  cout << "Addad aval  ";

  cin >> a;

  cout << "BA CHE AMALI MOHASEBE ANJAM KHAHID DAD?" << "*   /     radical   sin   cos   cot   tan    factorial ";




  cin >> input;




  if(input == "/" || input == "*") 

 {

        cout << "Addad dovom ? ";

        cin >> b;

   }

    

  if (input == "/")

    {

      if (b == 0)

 cout << "taghsim";

      else

 cout << "taghsim : " << a / b;

    }

  if (input == "*")

    {

      cout << "zarb: " << a * b;

    }

  if (input == "radical")

    {

      cout << "radical: " << sqrt (a);

    }

  if (input == "sin")

    {

      cout << "sin: " << sin ((a * 3.14) / 180);

    }

  if (input == "cos")

    {

      cout << "cos: " << cos ((a * 3.14) / 180);

    }

  if (input == "tan")

    {

      cout << "tan: " << tan ((a * 3.14) / 180);

    }

  if (input == "cot")

    {

      cout << "cot: " << 1 / tan ((a * 3.14) / 180);

    }

  if (input == "factorial")

    {

      double factorial = 1;

      for (int i = 1; i <= a; i++)

 factorial = factorial * i;

      cout << "factorial: " << factorial;

    }

}