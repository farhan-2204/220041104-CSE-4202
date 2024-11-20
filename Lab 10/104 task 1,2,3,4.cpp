#include <iostream>
#include <string>

using namespace std;

class CharacterActions{
private:

public:
    virtual int attack() = 0;
    virtual void defend() = 0;
    virtual int useSpecialAbility() = 0;
    virtual void displayStats() = 0;
};

class BaseCharacter:public CharacterActions{
protected:
    string name;
    string specialAbility;
    int health;
    int mana;
    int attackPower;
    int specialPower;
    bool shield;

public:
    BaseCharacter(){}

    BaseCharacter(string _name, int _health, int _attackpower, int _specialpower){
        name = _name;
        health = _health;
        mana = 0;
        attackPower = _attackpower;
        specialPower = _specialpower;
        specialAbility = "None";
        shield = false;
    }

    int attack() {return attackPower;}

    int useSpecialAbility() {return specialPower;}

    void defend() {shield = true;}

    void displayStats(){
        cout<<"Character Name: "<<name<<endl;
        cout<<"Current Health: "<<health<<endl;
        cout<<"Current Mana: "<<mana<<endl;
        cout<<endl;
    }

    //Following functions are not inherited from the parent class

    string getName() {return name;}

    string ability() {return specialAbility;}

    int getHealth() {return health;}

    void takeDamage(int x) {health -= x;}

    bool isWasted() {return health <= 0;}

    bool isHardened() {return shield;}

    void soften() {shield = false;}

    void increaseMana() {mana += 50;}

    bool isSpecial() {return mana > 99;}

    void resetMana() {mana = 0;}
};

class Warrior: public BaseCharacter{
private:

public:
    Warrior(){
        name = "Warrior";
        specialAbility = "Berserk Rage";
        health = 100;
        attackPower = 25;
        specialPower = 35;
        shield = false;
    }
};

class Mage: public BaseCharacter{
private:

public:
    Mage(){
        name = "Mage";
        specialAbility = "Arcane Blast";
        health = 120;
        attackPower = 20;
        specialPower = 30;
        shield = false;
    }
};

class Archer: public BaseCharacter{
private:

public:
    Archer(){
        name = "Archer";
        specialAbility = "Fire Arrow";
        health = 90;
        attackPower = 20;
        specialPower = 35;
        shield = false;
    }
};

class BossEnemy{
private:
    int health;
    int attackPower;

public:
    BossEnemy(){
        health = 150;
        attackPower = 30;
    }

    int getHealth() {return health;}

    int attack() {return attackPower;}

    void takeDamage(int x) {health -= x;}

    bool isWasted() {return (health <= 0);}

};

class GameEngine{
private:
    BaseCharacter* character[3];
    BossEnemy boss;
    bool isRunning;

public:
    GameEngine(){
        character[0] = new Warrior;
        character[1] = new Mage;
        character[2] = new Archer;
        isRunning = true;

        cout<<"Game begins! Players vs. Boss"<<endl<<endl;
    }

    ~GameEngine(){
        for(int i=0; i<3; i++)
            delete character[i];
    }

    void finalGameState(){
        if(boss.isWasted()){
            cout<<"Boss Defeated! Players win!"<<endl;
            isRunning = false;
            return;
        }

        if(character[0]->isWasted() || character[0]->isWasted() || character[0]->isWasted()){
            cout<<"Wasted!"<<endl;
            isRunning = false;
            return;
        }
    }

    bool is_running(){
        return isRunning;
    }

    void gameState(int index, int type){
        if(type == 0){
            int attack = character[index]->attack();
            cout<<(character[index]->getName())<<" attacks with power "<<attack<<"!"<<endl;
            boss.takeDamage(attack);
            cout<<"Boss takes "<<attack<<" damage! Health now: "<<(boss.getHealth())<<endl;

            character[index]->increaseMana();
        }
        else if(type == 1){
            if(!character[index]->isSpecial())
                return;

            int attack = character[index]->useSpecialAbility();
            cout<<(character[index]->getName())<<" uses ";
            cout<<(character[index]->ability())<<" with power "<<attack<<"!"<<endl;
            boss.takeDamage(attack);
            cout<<"Boss takes "<<attack<<" damage! Health now: "<<(boss.getHealth())<<endl;

            character[index]->resetMana();
        }
        else if(type == 2){
            if(character[index]->isHardened()){
                character[index]->soften();
                cout<<(character[index]->getName())<<" defends itself"<<endl;
                return;
            }

            cout<<"Boss attacks "<<(character[index]->getName())<<" with power 30 !"<<endl;
            character[index]->takeDamage(30);
            cout<<(character[index]->getName())<<" takes 30 ";
            cout<<"damage! Health now: "<<(character[index]->getHealth())<<endl;
        }
        else if(type == 3){
            character[index]->defend();
        }
    }
};

int main(){
    GameEngine game;    

    while(game.is_running()){
        int index, type;
        cin>>index>>type;

        game.gameState(index, type);
        cout<<endl;
        game.finalGameState();
    }

    return 0;
}
