#include <iostream>
#include "challenge.h"
using namespace std;

void popQuiz::getInput(){
    cout<<"Answer: ";
    cin>>input;
}

bool popQuiz::quiz1(){
    cout<<"Who's the real one?"<<endl;
    cout<<"a.) Prof. Mingmanas Sivaraksa"<<endl;
    cout<<"b.) Golden Prof. Mingmanas Sivaraksa."<<endl;
    cout<<"c.) Prof. Tanasanee Phienthrakul"<<endl;
    cout<<"d.) Golden Prof. Tanasanee Phienthrakul"<<endl;
    getInput();

    if(input=='a' || input=='b' || input=='c'|| input=='d'){
        ans = true;
        cout<<"Of course! They're all real!"<<endl;
    }
    else {
        cout<<"How did you eff this up? F for you!"<<endl;
        ans = false;
    }
    return ans;
}

bool popQuiz::quiz2(){
    cout<<"How many SDGs are there?"<<endl;
    cout<<"a.) 16"<<endl;
    cout<<"b.) 17"<<endl;
    cout<<"c.) 18"<<endl;
    cout<<"d.) 19"<<endl;
    getInput();
    if(input=='b'){
        ans = true;
        cout<<"You're correct! Thanks for the excuse of putting SDGs 4: Education in our objective. XOXO"<<endl;
    }
    else if(input=='a' || input=='c'|| input=='d'){
        ans = false;
        cout<<"OMG. Didn't you take MUGE100 class? You can't mess this up!"<<endl;
    }
    return ans;
}

bool popQuiz::quiz3(){
    cout<<"Who do you prefer?"<<endl;
    cout<<"a.) Prof. Tanasanee Phienthrakul"<<endl;
    cout<<"b.) Prof. Mingmanas Sivaraksa"<<endl;
    getInput();
    if(input=='a' || input=='b'){
        ans = false;
        cout<<"How could you!"<<endl;
    }
    else {
        cout<<"Can't choose huh? Well you're exactly right! They're both great aren't they?"<<endl;
        ans = true;
    }
    return ans;
}

void popQuiz::randomquiz(){
    srand(time(NULL));
    int r = rand()%3;
    switch (r){
    case 0:
        quiz1();
        break;
    case 1:
        quiz2();
        break;
    case 2:
        quiz3();
        break;
    default:
        break;
    }
}

bool popQuiz::returnans(){
    return ans;
}