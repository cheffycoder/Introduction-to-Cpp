//polymorphism and virtual fn

#include<bits/stdc++.h>
using namespace std;

class Enemy{
	
	protected:
		int attackPower;
		
	public:
		
		virtual void attack(){
			
		}
		/*void setAttackPower(int a){
			attackPower=a;
		}
		*/	
};

class Ninja: public Enemy{
	public:
		/*void attack(){
			cout<< " I am a ninja, ninja chop - "<< attackPower<< endl;
		}
		*/
		
		void attack(){
			cout<<"ninja attack!"<<endl;	
		}
};

class Monster: public Enemy{
	public:
		/*void attack(){
			cout<< " Monster must eat you -  "<< attackPower<< endl;
		}	
		*/
		
		void attack(){
		cout<<"monster attack!"<<endl;	
		}
};

int main(){
	/*
	
	Ninja n;
	Monster m;
	Enemy *enemy1= &n;//because ninja is of type enemy, this is valid; ninja is just more specific type of enemy
	Enemy *enemy2= &m;// anything that an enemy can do, monster can do
	enemy1->setAttackPower(29);//every enemy has an attackPower
	enemy2->setAttackPower(99);//
	n.attack();//cant use enemy1 because its type Enemy
	m.attack();// Enemy calss does not have attack()fn
	
	*/
	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;
	enemy1->attack();
	enemy2->attack();
	//vitual members make this even easier
	return 0;
}
