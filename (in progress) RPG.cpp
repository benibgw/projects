#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

    class Character{
    private:

            string name;
            int health;
            int strength;
            int resistence;

    public :

            Character(string n, int h, int s, int r) {

                name = n;
                health = h;
                strength = s;
                resistence = r;

            }
            void atack(){

                cout << name << " atacou com " << strength << " de força !\n";

            }

            void takeDamage(int damage){

                health -= resistence - damage;
                cout << name << " levou " << damage << "de dano. Vida restante " << health << "\n";

            }

            void defend (int damage){

                int defense = rand() % 3;

                if(defense == 0) {

                    takeDamage(damage);

                } else if(defense == 1){

                    health -= 0.5 * (resistence - damage);
                    cout << name << " levou " << damage << "de dano. Vida restante " << health << "\n";

                } else if(defense == 2) {

                    cout << name << " defendeu um ataque de " << damage << " de dano com sucesso !" << "\n";

                }

            }

            void status(){

                cout << "Nome : " << name << "\nVida : " << health << "\nForca : " << strength << "\n";

            }
    };

int main(){

    string name;

    cout << "\n Digite o nome que deseja : ";
    cin >> name;

    Character Player(name, 100, 20, 10);

    cout << "\n";
    Player.status();

    cout << "\n";
    cout << "---. Precione ENTER para proseguir .---";
    getchar();
    getchar();

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif // _WIN32

}
