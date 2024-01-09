#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int w;
    cout << "Podaj nr miesiaca" << endl;
    if (!(cin >> w))
    {
        cerr << "Blad!" << endl;
        exit(0);
    }
    switch (w)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        {
            cout << "31 dni" << endl;
            break;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        {
            cout << "30 dni" << endl;
            break;
        }
    case 2:
        {
            int rok;
            cout << "Podaj rok:";   cin >> rok;
            if (((rok%4 == 0) && (rok%100 != 0)) || (rok%400 == 0))
            {
                cout << "29 dni" << endl;
            }
            else
            {
                cout << "28 dni" << endl;
            }
            break;
        }
    default:
        {
            cout << "nie ma takiego miesiaca" << endl;
        }
    }
    return 0;
}
