#include<iostream>
using namespace std;
class book{
    public:
    char name;
    int price;
    int noOfpages;
    int countBooks(int p){
        if(price<p){
            return 1;
        }
        else{
            return 0;
        }
    }

    bool bookPresent(char naam){
        if(name==naam){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    book revolution;
    revolution.name='R';
    revolution.price=500;
    revolution.noOfpages=25;
    cout<<revolution.countBooks(800)<<endl;
    cout<<revolution.bookPresent('R');
}