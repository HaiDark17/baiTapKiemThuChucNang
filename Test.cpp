#include <iostream>
#include <stdio.h>
using namespace std;
void Bill(float x, int y){
    if(y <18 && y>0){
        if(x<0){
            cout << "Input không hợp lệ.";
        }else{
            if(x<3.0){
                cout << x* 30000;
            }else{
                cout << x*27000;
            }
        }
    }else if(y > 18){
        if(x<0){
            cout << "Input không hợp lệ.";}
            else{
            if(x<3.0){
                cout << x* 40000;
            }else{
                cout << x*36000;
            }
        }
    }else{
        cout << "Input không hợp lệ.";
    }
    
}

int main()
{
    float soGioChoi;
    int age;
    
    cin >> soGioChoi >> age;
    Bill (soGioChoi,age);

    return 0;
}