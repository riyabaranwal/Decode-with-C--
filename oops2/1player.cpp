#include<iostream>
using namespace std;    
class Gun{
public:
    int ammo;
    int damage;
    int scope;
};
class player{
private:
    class Helmet{
       int hp;
       int level;
public:
        void setHp(int hp){
            this->hp=hp;
        }

        void setLevel(int level){
            this->level=level;
        }
         int getHp(){
           return hp;
        }

        int getLevel(){
           return level;
        }

    };
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;
public:
int gethealth(){
    return health;
}   

int getage(){
    return age;
} 

int getScore(){
    return score;
} 

int isAlive(){
    return alive;
}

Gun getGun(){
    return gun;
}

void sethealth(int health){
    this->health=health;
}   

void setage(int age){
  this->age=age;
} 

void setScore(int score){
   this->score=score;
} 

void isAlive(bool alive){
    this->alive=alive;
}

void setGun(Gun gun){
    this->gun=gun;
}

void setHelmet(int level){
    Helmet *helmet = new Helmet;
    helmet->setLevel(level);
    int health = 0;

    if(level==1){
        health=25;
    }
    else if(level==2){
        health=50;
    }
    else if(level==3){
        health=100;
    }
    else{
        cout<<"invalid level";
    }
    helmet->setHp(health);
    this->helmet=*helmet;
}

void getHelmet(){
    cout<<helmet.getHp()<<endl;
    cout<<helmet.getLevel()<<endl;
}

};

int addscore(player a , player b){
    return b.getScore()+b.getScore();
}

player getMaxScorePlayer(player a, player b){
    if(a.getScore()>b.getScore()){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    player Harsh;
    player Arsh;
    player *Urvasi = new player;
    
    Gun akm;
    akm.ammo=50;
    akm.damage=68;
    akm.scope=39;

    Harsh.sethealth(45);
    Harsh.setage(30);
    Harsh.setScore(90);
    Harsh.isAlive(true);
    Harsh.setGun(akm);
    Harsh.setHelmet(2);

    Gun awm;
    awm.ammo=78;
    awm.damage=90;
    awm.scope=120;

    Arsh.sethealth(45);
    Arsh.setage(30);
    Arsh.setScore(90);
    Arsh.isAlive(true);
    Arsh.setGun(akm);
    Arsh.setHelmet(3);
    
    Gun gun123=Arsh.getGun();
    cout<<gun123.damage<<endl;
    cout<<gun123.ammo<<endl;
    cout<<gun123.scope<<endl;
    Arsh.getHelmet();


    Urvasi->sethealth(45);
    Urvasi->setage(30);
    Urvasi->setScore(90);
    Urvasi->isAlive(true);


    cout<<addscore(Harsh,Arsh);
}