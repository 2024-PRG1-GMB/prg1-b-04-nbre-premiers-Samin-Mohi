#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    //Variables utiles
    int val;                //valeur donné par l'utilisateur
    int colonne = 0;        //compteur pour revenir à la ligne après 5 nombres
    char reponse;           //valeur pour savoir si l'utilisateur recommence le programme
    bool restart = true;    //flag pour le relancement du programme

    do {
        if (restart) {
            cout << "Ce programme ... " << endl;

            do {
                cout << "Entrer une valeur [2-1000] : ";
                cin >> val;
            } while (val < 2 or val > 1000);

            //Code nombre premier
            for (int i = 2; i <= val; ++i) {
                bool est_premier = true;

                for (int j = 2; j * j <= i; ++j) {

                    if (i % j == 0) {
                        est_premier = false;
                        break;
                    }
                }

                //code cinq nombres par lignes :
                if (est_premier) {
                    cout << '\t' << i << " ";
                    ++colonne;

                    if (colonne % 5 == 0) {
                        cout << endl;
                        colonne = 0;
                    }
                }
            }
        }

        cout << endl << "Voulez-vous recommencer [O/N] : " << endl;
        cin >> reponse;

        //Si oui le flag devient vrai et on recommence le programme
        if (reponse == 'O') {
            restart = true;
        }
        else {
            restart = false;
        }

    } while (reponse != 'N');

    return EXIT_SUCCESS;

}
