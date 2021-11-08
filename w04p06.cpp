#include <iostream>

using namespace std;

int main()
{
    int plansza[4][4] = {1, 0, 0, 1,
                         0, 0, 0, 1,
                         1, 1, 0, 0,
                         0, 0, 0, 0};
    int x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;

    if (plansza[x][y] == 1)
        cout << "Trafiony";
    else
        cout << "Pudlo";
    return 0;
}