#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int a;          //valeur donné par l'utilisateur
    char b;         //valeur pour savoir si l'utilisateur recommence le programme


    cout << "Ce programme ... " << endl;

    do {
        cout << "Entrer une valeur [2-1000] : ";
        cin >> a;
    } while (a < 2 or a > 1000);

    for (int i = 2; i <= a; ++i) {

        bool est_premier = true;

        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                est_premier = false;
                break;
            }
        }

        if (est_premier) {
            cout << '\t' << i << " ";
        }
    }



    return EXIT_SUCCESS;

}
