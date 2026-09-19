#include <iostream>
#include <string>
#include <cstdlib>

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

        bool isAlive() const {
            return health > 0;
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

        bool isAlive() const {
            return health > 0;
        }
};

void welcome() {
    cout << "Welcome to my Terminal Dungeon. \n";
    cout << "There are enemies around every corner. \n";
    cout << "To begin enter your name. \n";
    cout << "Once thats complete we will begin! \n";
}

void enterDungeon(const string& playerName) {
    cout << "\nWelcome to the dungeon, " << playerName << ".\n";
    cout << "The doors close behind you...\n";
    cout << "Good luck.\n";
}

int main() {
    system("cls");

    welcome();

    string playerName;

    cout << "Enter your name: ";
    cin >> playerName;

    Player player(playerName);
    enterDungeon(playerName);
    player.showStats();

    // Enemy goblin("Goblin", 50, 10, 25);
    // Enemy skeleton("Skeleton", 70, 15, 40);
    // Enemy dragon("Dragon", 250, 40, 500);

    // goblin.showStats();
    // skeleton.showStats();
    // dragon.showStats();

    // cout << "\nAre you alive: " << (player.isAlive() ? "Yes" : "No") << "\n";

    return 0;
}