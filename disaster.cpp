#include <iostream>
#include "disaster.h"
using namespace std;

bool disaster::quiz1(){
    char input;
    cout<<"kid hai noi"<<endl;
    cout<<"a.)..."<<endl;
    cout<<"b.)..."<<endl;
    cout<<"Answer"<<endl;
    cin>>input;
    if(input=='a'){
        ans = true;
        return ans;
    }
    else if(input=='b'){
        ans = false;
        return ans;
    }
}

bool disaster::quiz2(){
    char input;
    cout<<"kid hai noi"<<endl;
    cout<<"a.)..."<<endl;
    cout<<"b.)..."<<endl;
    cout<<"Answer"<<endl;
    cin>>input;
    if(input=='a'){
        ans = true;
        return ans;
    }
    else if(input=='b'){
        ans = false;
        return ans;
    }
}

void disaster::randomquiz(){
    srand(time(NULL));
    if (rand() % 2 == 0) {
        quiz1();
    }
    else{
        quiz2();
    }

}

bool disaster::returnans(){
    return ans;
}