#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

struct game {
    string name;
    string Class; 
    int health = 0;
    int experiencePoints = 0;
    int level=0;
};
game character;
game player;

void character1() {
    cout << " You can enter all the information about the player displayed in the below context "<< endl;
    cout << "Enter character name: ";
    cin >> character.name;
    cout << "Enter character Class (Warrior, Mage, Rogue): ";
    cin >> character.Class;

    if (character.Class == "Warrior") {
        character.health = 200;
        character.experiencePoints = 40;
    } else if (character.Class == "Mage") {
        character.health = 150;
        character.experiencePoints = 35;
    } else if (character.Class == "Rogue") {
        character.health = 100;
        character.experiencePoints = 30;
    }

    cout << "Health: " << character.health << endl << "Experience Points: " << character.experiencePoints << endl;
}

void displayinfo() {
    cout << " All the character information is displayed "<<endl;
    player.name = character.name;
    player.Class = character.Class;
    player.health = character.health;
    player.experiencePoints = character.experiencePoints;

    cout << "Character name: " << player.name << endl;
    cout << "Character Class: " << player.Class << endl;
    cout << "Character Health: " << player.health << endl;
    cout << "Character Experience points: " << player.experiencePoints << endl;
}

 void mission1(){
     srand(time(0));
     int playerturn;
     int enemyturn;
     cout << "If player win against mythical creatures it gains experience points "<<endl;
     cout<<"Its player turn: "<<endl;
     playerturn=rand()%20;
     cout<<"Its enemy turn: "<<endl;
     enemyturn=rand()%20;
  if (playerturn>enemyturn){
     cout<<"Player wins "<<endl;
     player.experiencePoints+=20;
     if (player.experiencePoints>=50){
         player.level++;
         player.experiencePoints-=50;
         player.health+=20;
     }
     cout<<"Level is "<<player.level<<endl;
     cout<<"Experience Points left "<<player.experiencePoints<<endl;
     cout << "Player Health "<<player.health;
     }
     else if(playerturn<enemyturn){
          cout << "If player loses the battle its  health decreases ";
     cout<<"Enemy wins"<<endl;
     player.health-=25;
     cout<<"Player Health "<<player.health;
    } 
  cout<<endl;
}

 void mission2(){
     cout << "The second fight with mythical creatures "<<endl;
     int playerturn;
     int enemyturn;
     cout<<"Its player turn: "<<endl;
     playerturn=rand()%10;
     cout<<"Its enemy turn: "<<endl;
     enemyturn=rand()%10;
  if (playerturn>enemyturn){
     cout<<"Player wins "<<endl;
      player.experiencePoints+=25;
      if(player.experiencePoints>=50){
         player.level++;
         player.experiencePoints-=50;
         player.health+=25;
}
     cout<<"Level is "<<player.level<<endl;
     cout<<"Experience Points left "<<player.experiencePoints<<endl;
     cout << "Player health "<<player.health;
    }
else if(playerturn<enemyturn){
     cout<<"Enemy wins: "<<endl;
     player.health-=30;
     cout<<"Player Health "<<player.health;
    }
    cout<<endl;
  }

 void mission3(){
     cout << "The third fight with mythical creatures "<<endl;
     int playerturn;
     int enemyturn;
     cout<<"Its player turn: "<<endl;
     playerturn=rand()%10;
     cout<<"Its enemy turn: "<<endl;
     enemyturn=rand()%10;
  if (playerturn>enemyturn){
     cout<<"Player wins "<<endl;
     player.experiencePoints+=30;
     if(player.experiencePoints>=50){
         player.level++;
         player.experiencePoints-=50;
         player.health+=30;
     }
     cout<<"Level is "<<player.level<<endl;
     cout<<"Experience points left "<<player.experiencePoints<<endl;
     cout << "Player Health "<<player.health;
}
else if(playerturn<enemyturn){
     cout<<"Enemy wins: "<<endl;
     player.health-=35;
     cout<<"Player Health "<<player.health;
    }
    cout<<endl;
  }
 
  void mission4(){
     int playerturn;
     int enemyturn;
     cout << "The fourth fight with mythical creatures ";
     cout<<"Its player turn: "<<endl;
     playerturn=rand()%10;
     cout<<"Its enemy turn: "<<endl;
     enemyturn=rand()%10;
  if (playerturn>enemyturn){
     cout<<"Player wins "<<endl;
     player.experiencePoints+=35;
     if (player.experiencePoints>=50){
         player.level++;
         player.experiencePoints-=50;
         player.health+=35;
     }
     cout<<"Level is "<<player.level<<endl;
     cout<<"Experience Points left "<<player.experiencePoints<<endl;
    cout<<"Player Health "<<player.health;
      
  }
else if(playerturn<enemyturn){
     cout<<"Enemy wins: "<<endl;
     player.health-=40;
     cout<<"Player Health "<<player.health;
    }
    cout<<endl;
  }
    
  void mission5(){
      cout << "The fifth fight with mythical creature ";
     int playerturn;
     int enemyturn;
     cout<<"Its player turn: "<<endl;
     playerturn=rand()%10;     
     cout<<"Its enemy turn: "<<endl;
     enemyturn=rand()%10;
     if (playerturn>enemyturn){
     cout<<"Player wins "<<endl;
     player.experiencePoints+=40;
     if (player.experiencePoints>=50){
         player.level++;
         player.experiencePoints-=50;
         player.health+=40;

     }
    cout<<"level is "<<player.level<<endl;
    cout<<"Experience points left "<<player.experiencePoints<<endl;
    cout << "Player Health "<<player.health;
}
else if(playerturn<enemyturn){
     cout<<"Enemy wins: "<<endl;
     player.health-=45;
     cout<<"Player Health "<<player.health;
    }
    cout<<endl;
  }

int main() {
    character1();
    displayinfo();
    int option;
      while(option!=6){
          cout << "If user want to play any mission it can choose option according to the mission"<<endl;
    cout<<"Enter a number to play any mission ";
    cin>>option;
    
    if(option==1){
    mission1();
   }
   else if (option==2){
       mission2();
   }
   else if (option==3){
       mission3();
   }
   else if (option==4){
       mission4();
   }
   else if (option==5){
       mission5();
   }
   else if(option==6)
   {
       cout<<"EXIT" ;
   }
   else{
       break;
   }
 }
  return 0;
}
