#include <iostream>
#include <string>

using namespace std;

class Player {
    public: 
        string name;
        int health;
        int attack;
        int gold;

        Player(string playername) {
            name = playername;
            health = 100;
            attack = 20;
            gold = 0;
        }
        
        void showStats() {
            cout << "\n--- " << name << " --\n";
            cout << "Health: " << health << "\n";
            cout << "Attack: " << attack << "\n";
            cout << "Gold: " << gold << "\n";
        }
};

class Enemy {
    public:
        string name;
        int health;
        int attack;
        int goldReward;

        Enemy(string enemyName, int enemyHealth, int enemyAttack, int reward) {
            name = enemyName;
            health = enemyHealth;
            attack = enemyAttack;
            goldReward = reward;
        }

        void showStats() {
            cout << "\n--- " << name << " --\n";
            cout << "Health: " << health << "\n";
            cout << "Attack: " << attack << "\n";
            cout << "Gold: " << goldReward << "\n";
        }
};

int main() {
    string playerName;

    cout << "Enter your name: ";
    cin >> playerName;

    Player player(playerName);
    player.showStats();

    Enemy goblin("Goblin", 50, 10, 25);
    Enemy skeleton("Skeleton", 70, 15, 40);
    Enemy dragon("Dragon", 250, 40, 500);

    goblin.showStats();
    skeleton.showStats();
    dragon.showStats();


    return 0;
}