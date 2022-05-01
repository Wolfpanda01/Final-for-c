#include <iostream>
#include "storyelements.h"
using namespace story;
using namespace std;

void story::elements:: functstart() {
    cout << "You have tranfored to a majic high school where you  will meet new frinds, learn magic and use that magic in a fight." << endl;
    /* imputs name, int output name, small discropin of program
    * This is the start of the story where you tell your name and pick what class you will be apart of.
    */
    cout << "Welcome to WayWere High school! What's your name new student? asked the tired teacher" << endl;
    cin >> name;
    cout << "Hello " << name << ",i'm glad you join us in Wayware High school of Magic." << endl;
    cout << "Pick 1 or 2" << endl;
    cin >> y;

    if (y < 2) {
        //input int, output class that player is put in
        cout << "Wecome to Class A, young sprout said the kind elderly teacher." << endl;
    }

    else {
        //input int, output class that player is put in
        cout << "Your with me sport, Wecome to Class B said the said the gruff sounding teacher." << endl;

    }
}
void story::elements::friends() {
    if (y < 2) {
        //route for class A side
        cout <<"You head over to Class A room and sit down for the roll call." << endl; 
        cout << " You make it to your seat and see two of your classmates taking." << endl;
       cout << "You tell them hello and they ask for your name." << endl;
        cin >> name;
        cout << "You tell them your name is " << name << endl;
        cout << " Wow, what an awsome name, my name is sky and my friend here is Olive." << endl;
        cout << "You all had a lovely talk before the teacher came in." << endl;
        cout << "You became friends with Sky and Olive." << endl;
        cout << "Hello my little sprouts, today we are going to have a dual with both class fighting in the dual." << endl;
    }
    else {
        //route for class B side, you meet the yang sitters here, no inputs or outputs
        cout << "You head over to Class B room and sit down for the roll call." << endl;
        cout << "Hey hey, the name is Sally Yang! Its cool that we a going to be classmates" << endl;
        cout << "Sally, go to your seat of teach is going to be mad at you again" << endl;
        cout << "Why should I, sis." << endl;
        cout << "Sorry for my stuck up sister say" << endl;
        cout << "Say when and sat down but Sally was still standing by your desk" << endl;
        cout << "The teacher notice a standing student sit down say" << endl;
        cout << "Sir, I am sitting." << endl;
        cout << "Sorry say, sit down sally, sally when to her chair and sat down" << endl;
        cout << "You made friends with the yang sisters" << endl;
        cout << "Hello sports, today we are going to have a dual with both class fighting in the dual. So lets rock there world!" << endl;

    }
}
void icedual() {
    //fighter y("Say", 50);
    //ice_you i("you", 60);
    int a = 10;
    int as = 15;
    //you will hit firts and 
    //i.loseHealth(i.magic_ice_attack());
    cout << "lost this much heatlh " << a << " rivel's new heatlh is " << "40" << endl;
    //y.loseHealth(y.attack());
    cout << "lost this much heatlh " << a << " your new heatlh is " << "50" << endl;
    //i.loseHealth(i.magic_ice_attack());
    cout << "lost this much heatlh " << a << " rivel's new heatlh is " << "30" << endl;
    //y.loseHealth(y.attack());
    cout << "lost this much heatlh " << a << " your new heatlh is " << "40" << endl;
    //i.loseHealth(i.magic_ice_attack());
    cout << "lost this much heatlh " << a << " rivel's new heatlh is " << "20" << endl;
    //y.loseHealth(y.attack());
    cout << "lost this much heatlh " << a << " your new heatlh is " << "30" << endl;
    //i.loseHealth(i.magic_ice_attack());
    cout << "lost this much heatlh " << a << " rivel's new heatlh is " << "10" << endl;
    //y.loseHealth(y.attack());
    cout << "lost this much heatlh " << a << " your new heatlh is " << "20" << endl;
    //i.loseHealth(i.magic_ice_attack());
    cout << "lost this much heatlh " << a << " rivel's new heatlh is " << "0" << endl;
    //y.loseHealth(y.attack());
    cout << "lost this much heatlh " << a << " your new heatlh is " << "10" << endl;

}

void firedual() {
    //fighter y("Say", 50);
    //fire_you f("you", 50);
    int a = 10;
    int as = 15;
    //you will hit firts and 
    //f.loseHealth(f.magic_fire_attack());
    cout << "lost this much heatlh " << as << " rivel's new heatlh is " << "35" << endl;
    //y.loseHealth(y.attack());
    cout << "lost this much heatlh " << a << " your new heatlh is " << "40" << endl;
    //f.loseHealth(f.magic_fire_attack());
    cout << "lost this much heatlh " << as << " rivel's new heatlh is " << "20" << endl;
    //y.loseHealth(y.attack());
    cout << "lost this much heatlh " << a << " your new heatlh is " << "30" << endl;
    //f.loseHealth(f.magic_fire_attack());
    cout << "lost this much heatlh " << as << " rivel's new heatlh is " << "5" << endl;
    //y.loseHealth(y.attack());
    cout << "lost this much heatlh " << a << " your new heatlh is " << "20" << endl;
    //f.loseHealth(f.magic_fire_attack());
    cout << "lost this much heatlh " << as << " rivel's new heatlh is " << "0" << endl;
    //y.loseHealth(y.attack());
    cout << "lost this much heatlh " << a << " your new heatlh is " << "10" << endl;
}
void story::elements::magic() {
    //input int output who you will be fighting in the dual
    cout << "Pick 1 or 2" << endl;
    cin >> h;
    if (h < 2) {
        cout << "You have fire magic." << endl;
        cout << "You will be put to the test of your magic stills" << endl;
       cout << "Today, you will be facing Olive" << endl;
       firedual();

    }
    else {
        cout << "You have ice magic" << endl;
        cout << "You will be put to the test of your magic stills" << endl;
        cout << "Today, you will be facing Say" << endl;
        icedual();
    }
}

void story::elements::test() {
    //Input none, output refences to the grade from the dual
    cout << "After the magic dual you got your grade " << wrongtest_score << endl;
    cout << "woops, I accentally gave you the wrong test back!" << endl;
    cout << "Here you go, heres your actally test grade!" << endl;
    cout << "You got your grade the right grade this time! " << test_score << endl;
}

void story::elements::spiders() {
    //input none, output the pointer of w which is 4 that is how many spiders there are
    int w = 4;
    int *i =&w;  
    cout << "Ahhhhhh, there are "<< *i << " spiders! yells one of the girls" << endl;
    if (h < 2) {
        cout << "you kill all the spiders with fire magic" << endl;
        cout << "You survived your first day at magic high school and go home with your head held high" << endl;
    }
    else {
        cout << "you kill all the spiders with ice magic" << endl;
        cout << "You survived your first day at magic high school and go home with your head held high" << endl;
    }

}

