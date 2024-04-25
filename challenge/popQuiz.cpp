#include <iostream>
#include <cctype>
#include "challenge.h"
using namespace std;

void popQuiz::getInput(){
    cout<<" \033[4mAnswer\033[0m: \033[35m";
    cin>>input;
    input = tolower(input);
    cout<<"\033[0m";
}

bool popQuiz::quiz1(){
    cout<<"Who's the real one?"<<endl;
    cout<<"  \033[35ma.)\033[0m Prof. Mingmanas Sivaraksa"<<endl;
    cout<<"  \033[35mb.)\033[0m Golden Prof. Mingmanas Sivaraksa."<<endl;
    cout<<"  \033[35mc.)\033[0m Prof. Tanasanee Phienthrakul"<<endl;
    cout<<"  \033[35md.)\033[0m Golden Prof. Tanasanee Phienthrakul"<<endl;
    getInput();
    system("clear");

    if(input=='a' || input=='b' || input=='c'|| input=='d'){
        ans = true;
        cout<<endl<<" \033[32mOf course! They're all real!\033[0m"<<endl;
    }
    else {
        cout<<endl<<" How did you eff this up? \033[31mF\033[0m for you!"<<endl;
        ans = false;
    }
    return ans;
}

bool popQuiz::quiz2(){
    cout<<"How many SDGs are there?"<<endl;
    cout<<"\033[35ma\033[0m.) 16"<<endl;
    cout<<"\033[35mb\033[0m.) 17"<<endl;
    cout<<"\033[35mc\033[0m.) 18"<<endl;
    cout<<"\033[35md\033[0m.) 19"<<endl;
    getInput();
    system("clear");

    if(input=='b'){
        ans = true;
        cout<<endl<<" \033[32mYou're correct!\033[0m Thanks for the excuse of putting "<<endl<<" SDGs 4: Education in our objective. \033[31mXOXO\033[0m"<<endl;
    }
    else if(input=='a' || input=='c'|| input=='d'){
        ans = false;
        cout<<endl<<" OMG. Didn't you take \033[1mMUGE100\033[0m class? You can't mess this up!"<<endl;
    }
    else cout<<endl<<" \033[31mWrong Input, sorry :(\n Choose either a, b, c, d next time!\033[0m"<<endl;
    return ans;
}

bool popQuiz::quiz3(){
    cout<<"Who do you prefer?"<<endl;
    cout<<"\033[35ma.)\033[0m Prof. Tanasanee Phienthrakul"<<endl;
    cout<<"\033[35mb.)\033[0m Prof. Mingmanas Sivaraksa"<<endl;
    getInput();
    system("clear");
    
    if(input=='a' || input=='b'){
        ans = false;
        cout<<endl<<" How could you?! We all know they're both awesome!"<<endl;
    }
    else {
        cout<<endl<<" Can't choose huh? Well you're exactly right!"<<endl<<"They're both great aren't they?"<<endl;
        ans = true;
    }
    return ans;
}

bool popQuiz::quiz4(){
    cout<<"Choose sustainable methods to address global warming."<<endl;
    cout<<"\033[35ma.)\033[0m Increase the use of clean energy."<<endl;
    cout<<"\033[35mb.)\033[0m Reduce the global population."<<endl;
    cout<<"\033[35mc.)\033[0m Doing nothing and waiting for others to take action."<<endl;
    getInput();
    if(input=='b'){
        ans = false;
        cout<<endl<<" PLEASE DON'T DO THAT!"<<endl; 
	    cout<<" Reducing the global population does not solve the issue \n of global warming"<<endl;
        cout<<" if humans continue the same behaviors that cause it."<<endl;
    }
    else if(input=='c'){
        ans = false;
        cout<<endl<<"  NO YOU CAN DO SOMETHING!"<<endl; 
	    cout<<" There are various ways we can address this issue ourselves"<<endl;
        cout<<" including advocating for solutions at the root cause."<<endl;
    }
    else if(input=='a'){
        cout<<endl<<" CORRECT! "<<endl;
	    cout<<" Using clean energy can help reduce pollutants released into\n the environment";
        cout<<" and decrease the usage of resources that contribute to global\n warming."<<endl;
        ans = true;
    }else cout<<endl<<" \033[31mWrong Input\033[0m, sorry :(\n Choose either a, b, c next time!"<<endl;
    return ans;
}

bool popQuiz::quiz5(){
    cout<<"Which one is not clean energy?"<<endl;
    cout<<"\033[35ma.)\033[0m Solar Energy"<<endl;
    cout<<"\033[35mb.)\033[0m Biomass Energy"<<endl;
    cout<<"\033[35mc.)\033[0m Coal"<<endl;
    getInput();
    if(input=='b'){
        ans = false;
        cout<<endl<<" NO! "<<endl; 
	    cout<<" It is energy produced from the decomposition of biomass"<<endl;
        cout<<" which does not produce pollutants."<<endl;
    }
    else if(input=='a'){
        ans = false;
        cout<<endl<<"  NO YOU CAN DO SOMETHING!"<<endl; 
	    cout<<" There are various ways we can address this issue ourselves"<<endl;
        cout<<" including advocating for solutions at the root cause."<<endl;
    }
    else if(input=='c'){
        cout<<endl<<" CORRECT! "<<endl;
	    cout<<" Coal is directly impacts the Earth's environment and atmosphere."<<endl;
        ans = true;
    }else cout<<endl<<" \033[31mWrong Input\033[0m, sorry :(\n Choose either a, b, c next time!"<<endl;
    return ans;
}

bool popQuiz::quiz6(){
    cout<<"Which one is a correct way to protect land ecosystems?"<<endl;
    cout<<"\033[35ma.)\033[0m Buying and selling wild animals."<<endl;
    cout<<"\033[35mb.)\033[0m Not releasing alien species into our local area."<<endl;
    cout<<"\033[35mc.)\033[0m Traveling without considering the creature beings in that\n ecosystem."<<endl;
    getInput();
    if(input=='a'){
        ans = false;
        cout<<endl<<" PLEASE DONT! "<<endl; 
	    cout<<" Trading wild animals is illegal. But you can consider \n exotic pets";
        cout<<" such as hedgehog or sugar glider."<<endl;
    }
    else if(input=='c'){
        ans = false;
        cout<<endl<<" WRONG! "<<endl; 
	    cout<<"When visiting nature, you should not destroy"<<endl;
        cout<<"or disturb the living beings in that area."<<endl;
    }
    else if(input=='b'){
        cout<<endl<<" CORRECT! "<<endl;
	    cout<<"Releasing alien species into local areas"<<endl;
        cout<<"can cause various damages to the ecosystem in that area."<<endl;
        ans = true;
    }else cout<<endl<<" \033[31mWrong Input, sorry :(\n Choose either a, b, c next time!\033[0m"<<endl;
    return ans;
}

void popQuiz::randomquiz(){
    srand(time(NULL));
    int r = rand()%9;
    switch (r){
    case 0: quiz1(); break;
    case 1: quiz2(); break;
    case 2: quiz3(); break;
    case 3: quiz4(); break;
    case 6: quiz4(); break;
    case 4: quiz5(); break;
    case 7: quiz5(); break;
    case 5: quiz6(); break;
    case 8: quiz6(); break;
    default: break;
    }
}

bool popQuiz::returnans(){
    return ans;
}