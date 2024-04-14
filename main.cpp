#include <iostream>
//#include "BST.h"
//#include "first.cpp"
#include <string>
#include "menu.cpp"
using namespace std;

int main(){
	
	menu a;
	first b;
	int i,s1,s2;
	while(1){
		s1 = a.loopmenu1();
		s2 = a.loopmenu2();
		int add = a.build(s1,s2);
		//cout<<add<<endl;
		//TreeNodePtr tmp = b.findNode(tmp,add);
		a.addmenu(add);
	}

	return 0;
}