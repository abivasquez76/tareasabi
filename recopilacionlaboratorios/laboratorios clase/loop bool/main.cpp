#include <iostream>

using namespace std;

int main()
{
    bool isHappy = true;
    char input = ' ';

    while(isHappy == true)
    {
        cout << ":D" << endl;
        cout << "Sigues feliz? (T/F)";
        cin >> input;

        if(input == 'F')
            isHappy = false;
    }
    return 0;
}
