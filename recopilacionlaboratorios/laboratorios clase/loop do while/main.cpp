#include <iostream>

using namespace std;

int main()
{
   bool isHappy = false;
    char input  = ' ';

    do
    {
        cout << ":D" << endl;
        cout << "Sigues feliz? (T/F)";
        cin >> input;

        if(input == 'F')
            isHappy = false;

    } while(isHappy == true);

    return 0;
}
