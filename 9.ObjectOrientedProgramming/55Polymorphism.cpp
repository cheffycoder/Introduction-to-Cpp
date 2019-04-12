//Polymorphism-- it uses the same fn and perform diff fn

#include<bits/stdc++.h>
using namespace std;

class Enemy{
	
	protected:
		int attackPower;
		
	public:
		void setAttackPower(int a){
			attackPower=a;
		}	
};

class Ninja: public Enemy{
	public:
		void attack(){
			cout<< " I am a ninja, ninja chop - "<< attackPower<< endl;
		}
};

class Monster: public Enemy{
	public:
		void attack(){
			cout<< " Monster must eat you -  "<< attackPower<< endl;
		}	
};

int main(){
	Ninja n;
	Monster m;
	Enemy *enemy1= &n;// making first enemy object, because ninja is a type of enemy this is valid and a ninja is a more specific enemy
	/*as our ninja object is of type enemy, thats why we can say set the address equal to the pointer*/
	

	Enemy *enemy2= &m;// making second enemy object
	
	
	/*because this ninja and monster object is of type enemy, thus everything an enemy can do a ninja can do
	 and thats only why we can
	*/
	
	//from any enemy object we can call attackpower and it knows it has to apply attackpower to ninja as this pointer is pointing to it
	enemy1->setAttackPower(29);
	enemy2->setAttackPower(99);
	n.attack();
	m.attack();
	
	return 0;
}
