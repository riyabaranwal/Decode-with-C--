 //Given the radius of the circle predict whether numerically area of this circle is larger 
 //than the circumference or not.
 #include<iostream>
 using namespace std;
 int main(){
    int radius;
    cout<<"radius : ";
    cin>>radius;
    int area;
    area = 3.14 * radius * radius ;
    // cout<<"area : "<<area;
    int circumference;
    circumference = 2 * 3.14 * radius;
    if(area > circumference){
        cout<<"area is larger";
    }
    else{
        cout<<"circumference is larger";
    }

 }

