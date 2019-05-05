//abstract classes- its the class that has a pure virtual fn.

/*
pure virtual fn- its a virtual fn whose value is set to zero instead of a body. it doesnt do anything
any derived class that inherits from a class having a virtual fn has to overwrite this fn.
*/

/*  
	thus if you want to make a game with every single minster having diff set of attack then this comes handy as whenever you inherit enemy class
 	you have to define the attack fn and if however you forget then c++ will throw an error
*/
#include<bits/stdc++.h>
using namespace std;

class Enemy{
	
	protected:
		int attackPower;
		
	public:
		 virtual void attack()=0; // this is a pure virtual fn which does nothing and has no body or so.
		 
		/*
		virtual void attack(){// this is the virtual fn which will come in handly if in some derived class we forgot to define attack() fn
			cout<<"I am enemy attack"<<endl;
		}
		*/
};



class Ninja: public Enemy{
	public:
	
		
		void attack(){
			cout<<"ninja attack!"<<endl;	
		}
};




class Monster: public Enemy{
	public:

		// in case of a simple virtual fn if we dont define this void attack then the default virtaul fn attack will run
		// BUT IN CASE OF A PURE VIRTUAL FN IF WE DONT DEFINE ATTACK FN HERE THEN C++ WILL THROW ERROR MAKING IT NECESSARY TO OVERWRITE PURE VIRTUAL FN
		
		/*
		void attack(){
		cout<<"monster attack!"<<endl;	
		}
		*/
};




int main(){
	Ninja n;
	Monster m;

	// WILL GIVE ERROR AS WE DONT DEFINE THE ATTACK FN THAT IS THERE IN ABSTRACT BASE ENENMY CLASS 
	//and thus making it necessaary to overwrite the pure virtual fn 
			  
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;
	enemy1->attack();
	enemy2->attack();
	//vitual members make this even easier
	return 0;
}
