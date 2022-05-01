#pragma once
#include <string>
#include <cstring>
using namespace std;
namespace story{
	class elements
	{
	public:
		string name;
		int y;
		int h;
		void functstart();

		void friends();

		void magic();

		void test();
		void spiders();

	private:
		double test_score = 97;
		double wrongtest_score = 69;


	
	};
	// this has all the futures that go into the fight class which are with health and damga for the other classes

	class fighter {

	public:
		int health;

		fighter(string name_in, int ihp) {
			this->name = name_in;
			this->health = 50;
			this->hp = ihp;
		}
		int getHealth() {
			return this->health;
		}
		void loseHealth(int a) {

			this->health = this->health - a;
			
		}
		void loseHealth2(int as) {
          this->health = this->health - as;
		}
		int attack() {
			return this->hp;
		}

	private:
		string name;
		int hp;
		int a = 10;
		int as = 15;

	};


	class ice_you :public fighter {
	public:
		ice_you(string name, int ihp) :fighter(name, ihp) {
		}

		int magic_ice_attack() {
			return 10;
		}
	};




	class fire_you :public fighter {
	public:
		fire_you(string name, int ihp) :fighter(name, ihp) {
		}
		int magic_fire_attack() {
			return 15;
		}

	};


	
};


