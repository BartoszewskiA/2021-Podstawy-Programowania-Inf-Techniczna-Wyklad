#include <iostream>

using namespace std;

int main()
{
    int ile;
    cout<<"ile razy wypisac? ";
    cin >> ile;
    
    for (int i = 0 ; i < ile ; i++ )
        cout << i+1 <<": c++"<<endl;

    return 0;
}
