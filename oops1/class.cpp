#include<iostream>
class player{
    public:
    int score;
    int health;
};
using namespace std;
int main(){
    player Amit;
    Amit.score=56;
    Amit.health=100;
    cout<<Amit.score<<endl;
    cout<<Amit.health<<endl;
}