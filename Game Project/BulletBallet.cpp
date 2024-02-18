#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
/// maze
void printMaze();
//for player
void printPlayer();
void erasePlayer();
int playerHealth = 5;
//for enemey 1
void printEnemy1();
void eraseEnemy1();
void moveEnemy1();
bool e1WallHit= false;
//for x any y position
int x=150;
int y=4;
//player score
int score=0;
//foe enemey 2
void printEnemy2();
void eraseEnemy2();
void moveEnemy2();
bool e2WallHit= false;
//for enemy 3
void printEnemy3();
void eraseEnemy3();
void moveEnemy3();
bool e3WallHit= false;
	//player movement and firing
void movePlayerLeft();
void movePlayerRight();
void movePlayerUp();
void movePlayerDown();
void printFire();   
void moveFire();
void changeFIRE();
//player and enemies position
int e1X = 133, e1Y = 10;
int e2X = 2, e2Y = 2;
int e3X = 2 , e3Y = 8;
int pX = 59, pY = 29;
//for player firing
int fireX = 0, fireY = 0;
bool fired = false;

//enemy 1 health
int enemy1health = 2;
bool enemy1Dead = false;

//for player to left firing
bool straightFIRE = true;
bool leftFIRE = false;


//enemy 2 health
int enemy2health=2;
bool enemy2Dead = false;

//enemy 3 health 
int enemy3health=2;
bool enemy3Dead = false;


//for enemy 1 firing
void enemy1Fire();
void moveEnemy1Bullet();
int enemy1BulletX = 0;
int enemy1BulletY = 0;
bool enemy1fired = false;

//for enemy 2 firing
void enemy3Fire();
void moveEnemy3Bullet();
int enemy3BulletX = 0;
int enemy3BulletY = 0;
bool enemy3fired = false;

//for enemy 3 firing 
void enemy2Fire();
void moveEnemy2Bullet();
int enemy2BulletX = 0;
int enemy2BulletY = 0;
bool enemy2fired = false;
//player win
 void winScreen();

 // for color
 string setcolor(unsigned short color);

main()
{
       //print maze and player and enemies
      system("cls");
      printMaze();
      printPlayer();
      printEnemy1();
      printEnemy2();
      printEnemy3();
       while(true)
      {
       if (GetAsyncKeyState(VK_RIGHT))
        movePlayerRight();
        
     
      if (GetAsyncKeyState(VK_LEFT))
        movePlayerLeft();
    
      
      if (GetAsyncKeyState(VK_UP))
        movePlayerUp();
        
     
      if (GetAsyncKeyState(VK_DOWN))
        movePlayerDown();
      
      if (GetAsyncKeyState(VK_SPACE))
      {
        // enemy 1 firing
        if (!fired)
        {
          printFire();
          fired = true;
        }
      }
      if (GetAsyncKeyState('F'))      // left firing press F
      {
        if (!fired)
          changeFIRE();
      } 
      if (fired)
      {
        moveFire();
      }
      if (enemy1health != 0)       //for enemy 1 health
      {
        moveEnemy1();
        Sleep(10);
      }
      if (enemy1Dead)
      {
        eraseEnemy1();                 // enemey 1 dead
        enemy1Dead = false;
      }

       if (enemy2health != 0)           // for enemy 2 health
        {
            moveEnemy2();
            Sleep(30);
        }
        if (enemy2Dead)                      // enemy 2 dead
        {
            eraseEnemy2();
            enemy2Dead = false;
        }

        if (enemy3health != 0)      // fo enemy 3 health

        {
            moveEnemy3();
            Sleep(30);
        }
        if (enemy3Dead)                  // enemy 3 dead
        {
            eraseEnemy3();
            enemy3Dead = false;
        }
      
        if (!enemy1fired)               // enemy 1 firing
        {
            enemy1Fire();
        }
        if (enemy1fired && enemy1health != 0)
        {
            moveEnemy1Bullet();
        }
          if (!enemy2fired)                 // enemy 2 firing
        {
            enemy2Fire();
        }
        if (enemy2fired && enemy2health != 0)
        {
            moveEnemy2Bullet();
        }
        if (!enemy3fired)                 // enemy3 firing
        {
            enemy3Fire();
        }
        if (enemy3fired && enemy3health != 0)
        {
            moveEnemy3Bullet();
        }
       
        if (playerHealth == 0)      // player out
        {
            gotoxy(152 ,10);
            setcolor(12);
            cout << "Game Over";
            gotoxy(152,11);
            setcolor(2);
            cout << "Your Score: " << score;
            break;
        
        if (enemy1health == 0 && enemy2health == 0 && enemy3health == 0)        // player win
        {
            winScreen();
            break;
        }
    }
  // positions of health score etc
       gotoxy(152,9);
       setcolor(3);
      cout << "PLayer Health: " << playerHealth;
      setcolor(14);
       gotoxy(152,4);
      cout << "Player Score: "<<score;
      gotoxy(152,6);
      setcolor(12);
      cout << "Health of Enemy One: " << enemy1health;
        setcolor(6);
          gotoxy(152,7);
      cout << "Health of Enemy Two: " << enemy2health; 
        setcolor(8);
         gotoxy(152,8);
      cout << "Health of Enemy Three: " << enemy3health;


	}
}   


void printFire()
{
  if (getCharAtxy(pX + 3, pY - 1) != '#')
  {
    if (straightFIRE)
    {
      fireX = pX + 3;
      fireY = pY - 1;
      gotoxy(fireX, fireY);
      cout << "!";          // straight fire symbol
    }
  }
  if (getCharAtxy(pX - 1, pY + 1) != '#')
  {
    if (leftFIRE)
    {
      fireX = pX;
      fireY = pY + 1;
      gotoxy(fireX, fireY);
      cout << "<";                  // left fire symbol
    }
  }
}
void changeFIRE()           // for player friring
{
  if (straightFIRE)             // for straight fire 
  {
    straightFIRE = false;
    leftFIRE = true;
  }
  else if (leftFIRE)                   // for left fire 
  {
    straightFIRE = true;
    leftFIRE = false;
  }
}
void moveFire()                  //player firing
{
  if (straightFIRE)
  {
    gotoxy(fireX, fireY);
    cout << " ";
   
    if (getCharAtxy(fireX, fireY-1) == ' ')
    {
      
      fireY = fireY -1;  
       gotoxy(fireX, fireY);
      cout << "!";
    }
    else if (getCharAtxy(fireX, fireY-1) == '*' || getCharAtxy(fireX, fireY-1) == 'x'|| getCharAtxy(fireX, fireY-1 ) == '^')
    {
      score=score+10;
      enemy1health--;
      gotoxy(fireX, fireY - 1);                 // for enemy 1
      cout << " ";
      fired = false;
      if (enemy1health == 0)
        enemy1Dead = true;
    }
   else if (getCharAtxy(fireX, fireY-1) == '|' || getCharAtxy(fireX, fireY-1) == ')' || getCharAtxy(fireX, fireY-1) == '0'|| getCharAtxy(fireX, fireY-1) == '_'){
     score=score+10;
    enemy2health--;
      gotoxy(fireX, fireY-1);
      cout << " ";                                    // for enemey 2 
      fired = false;
       if (enemy2health == 0)
        enemy2Dead = true;
    
}
   else{
            fired = false;
  }
  }
  else if (leftFIRE)           // if player left fired
  { 
    gotoxy(fireX, fireY);
    cout << " ";
    
    if (getCharAtxy(fireX - 2, fireY) == ' ')
    {
      fireX = fireX - 1;
      
       gotoxy(fireX, fireY);
     cout << "<";
    
    }
   else if (getCharAtxy(fireX-2, fireY) == 'O' || getCharAtxy(fireX-2, fireY) == 'X'){
     score=score+10;
    enemy3health--;
      gotoxy(fireX - 1, fireY);
      cout << " ";                     // for enemy 3 
      fired = false;
       if (enemy3health == 0)
        enemy3Dead = true;
    }    

    else
            fired = false;
  }

}

// for player wining

  void winScreen()
{
    gotoxy(152,15);
    cout << "You Win";
    gotoxy(152,16);
    cout << "Your Score: " << score;
}
void printEnemy1()

{
  setcolor(12);
    gotoxy(e1X, e1Y);                   // print enemy 1
    cout << "  *******  ";
    gotoxy(e1X, e1Y + 1);
    cout << " *  x x  * ";
    gotoxy(e1X, e1Y + 2);
    cout << "  *  ^  *  ";
}

void eraseEnemy1()                   // erase enemy 1
{
    gotoxy(e1X, e1Y);
    cout << "           ";
    gotoxy(e1X, e1Y + 1);
    cout << "           ";
    gotoxy(e1X, e1Y + 2);
    cout << "           ";
}

void printEnemy2()                /// print enemy 2
{
  setcolor(6);
    gotoxy(e2X,e2Y);
    cout << " ( 00 ) " << endl;
    gotoxy(e2X,e2Y+1);
    cout << "_|_.._|_" << endl;
    gotoxy(e2X,e2Y+2);
    cout << "*     * " << endl;

}
void eraseEnemy2()
{                                 /// erase enemy 2
    gotoxy(e2X, e2Y);
    cout << "          ";
    gotoxy(e2X, e2Y + 1);
    cout << "          ";
    gotoxy(e2X, e2Y + 2);
    cout << "          ";
}

void printEnemy3()
{
  setcolor(8);
    gotoxy(e3X, e3Y);
    cout << "   OOOOO   ";           // print enemy 3
    gotoxy(e3X, e3Y + 1);
    cout << "  O     O  ";
    gotoxy(e3X, e3Y + 2);
    cout << " O  X X  O ";
}


void eraseEnemy3()                  // erase enemy 3
{
    gotoxy(e3X, e3Y);
    cout << "           ";
    gotoxy(e3X, e3Y + 1);
    cout << "           ";
    gotoxy(e3X, e3Y + 2);
    cout << "           ";
}


void moveEnemy1()              // enmey 1 movement
{
    eraseEnemy1();

    if (!e1WallHit)        
        e1Y = e1Y + 1;
    
    if(e1Y == 47)
        e1WallHit = true;

    if(e1WallHit){ 
        e1Y = e1Y - 1;
        if(e1Y < 11)
            e1WallHit = false;
    }


    printEnemy1();

}

void moveEnemy2()                 // enemy 2 movement
{
    eraseEnemy2();
    
    if (!e2WallHit)        
        e2X = e2X + 1;
    
    if(e2X == 100)
        e2WallHit = true;

    if(e2WallHit){
        e2X = e2X - 1;
        if(e2X < 8)
            e2WallHit = false;
    }

    printEnemy2();
}
void moveEnemy3()                     // eenmy 3 movemnt
{ 
    eraseEnemy3();

    if (!e3WallHit) {
        e3Y = e3Y + 1;

       
        if (e3Y == 45)
            e3WallHit = true;
            
    }

    if (e3WallHit) {
        e3Y = e3Y - 1; 

       
        if (e3Y < 10)
            e3WallHit = false;
    }

    e3X = e3X;

    printEnemy3();
}


void enemy1Fire()                                   // enemy 1 firing
{
    enemy1BulletX = e1X - 2;
    enemy1BulletY = e1Y + 1;
    gotoxy(enemy1BulletX, enemy1BulletY);
    cout << "A";
    enemy1fired = true;
}
void moveEnemy1Bullet()
{
    gotoxy(enemy1BulletX, enemy1BulletY);
    cout << " ";
    gotoxy(enemy1BulletX - 1, enemy1BulletY);
    cout << "A";
    if (getCharAtxy(enemy1BulletX - 2, enemy1BulletY) == ' ')
        enemy1BulletX = enemy1BulletX - 1;
    else if (getCharAtxy(enemy1BulletX - 2, enemy1BulletY) == '|' || getCharAtxy(enemy1BulletX - 2, enemy1BulletY) == '/'|| getCharAtxy(enemy1BulletX - 2, enemy1BulletY) == 'O')
    {
        gotoxy(enemy1BulletX - 1, enemy1BulletY);
        cout << " ";
        enemy1fired = false;
        playerHealth--;
    }
    else
    {
        gotoxy(enemy1BulletX - 1, enemy1BulletY);
        cout << " ";
        enemy1fired = false;
    }
}
void enemy3Fire()                               /// eenmy 3 firing
{
    enemy3BulletX = e3X + 4;
    enemy3BulletY = e3Y + 4;
    gotoxy(enemy3BulletX, enemy3BulletY);
    cout << "M";
    enemy3fired = true;
}
void moveEnemy3Bullet()
{
    gotoxy(enemy3BulletX, enemy3BulletY);
    cout << " ";
    gotoxy(enemy3BulletX +1, enemy3BulletY);
    cout << "M";
    if (getCharAtxy(enemy3BulletX + 2, enemy3BulletY) == ' ')
        enemy3BulletX = enemy3BulletX + 1;
    else if (getCharAtxy(enemy3BulletX + 2, enemy3BulletY) == '|' || getCharAtxy(enemy3BulletX + 2, enemy3BulletY) == '/'|| getCharAtxy(enemy3BulletX + 2, enemy3BulletY) == 'O')
    {
        gotoxy(enemy3BulletX + 1, enemy3BulletY);
        cout << " ";
        enemy3fired = false;
        playerHealth--;
    }
    else
    {
        gotoxy(enemy3BulletX + 1, enemy3BulletY);
        cout << " ";
        enemy3fired = false;
    }
}
void enemy2Fire()                                   // enemy 2 firing
{
    enemy2BulletX = e2X + 5;
    enemy2BulletY = e2Y + 5;
    gotoxy(enemy2BulletX, enemy2BulletY);
    cout << "D";
    enemy2fired = true;
}
void moveEnemy2Bullet()
{
    gotoxy(enemy2BulletX, enemy2BulletY);
    cout << " ";
    gotoxy(enemy2BulletX, enemy2BulletY+1);
    cout << "D";
    if (getCharAtxy(enemy2BulletX, enemy2BulletY+2) == ' ')
        enemy2BulletY = enemy2BulletY + 1;
    else if (getCharAtxy(enemy2BulletX, enemy2BulletY+2) == '|' || getCharAtxy(enemy2BulletX, enemy2BulletY+2) == '/'|| getCharAtxy(enemy2BulletX, enemy2BulletY+2) == 'O')
    {
        gotoxy(enemy2BulletX, enemy2BulletY+1);
        cout << " ";
        enemy2fired = false;
        playerHealth--;
    }
    else
    {
        gotoxy(enemy2BulletX, enemy2BulletY+1);
        cout << " ";
        enemy2fired = false;
    }
}


void printPlayer()                      // print player
{      
  setcolor(1);                                        

   gotoxy(pX, pY);  
   cout << "   O   ";
   gotoxy(pX, pY+1);
   cout << "// | \\";
   gotoxy(pX, pY+2);
   cout << " // \\ ";
}

void erasePlayer()
{                                      // erase player
   gotoxy(pX, pY);  
   cout << "       ";
   gotoxy(pX, pY+1);
   cout << "       ";
   gotoxy(pX, pY+2);
   cout << "       ";
}


void movePlayerLeft()                                    // player left movement
{
if(getCharAtxy(pX-1,pY)=='$'||getCharAtxy(pX-1,pY+1)=='$'||getCharAtxy(pX-1,pY+2)=='$')
	{
	erasePlayer();
  pX = pX-1;
  printPlayer();
  }
	
      if(getCharAtxy(pX-1,pY)==' '){
  	erasePlayer();
  	pX = pX-1;
  	printPlayer();
	}
}  
void movePlayerRight()          // player right movement

  {
if(getCharAtxy(pX+6,pY)== '$'||getCharAtxy(pX+6,pY+1)== '$'||getCharAtxy(pX+6,pY+2)== '$')
	{
	erasePlayer();
  pX = pX+1;
  printPlayer();
  }
	if (getCharAtxy(pX+7,pY - 1)== ' '){
  		erasePlayer();
  		pX=pX+1;
  		printPlayer();
	}
}      
void movePlayerDown()                     // player down movemnt
{
  if(getCharAtxy(pX,pY+4)=='$'||getCharAtxy(pX+1,pY+4)=='$'||getCharAtxy(pX+2,pY+4)=='$'||getCharAtxy(pX+3,pY+4)=='$'||getCharAtxy(pX+4,pY+4)=='$'||getCharAtxy(pX+5,pY+4)=='$')
	{
	erasePlayer();
        pX = pX+1;
        printPlayer();
  }
      if(getCharAtxy(pX, pY+4) == ' '){
       erasePlayer();
  pY = pY+1;
  printPlayer();
}
}
void movePlayerUp()                    // player up movemnet
{
  if(getCharAtxy(pX,pY-1)=='$'||getCharAtxy(pX+1,pY-1)=='$'||getCharAtxy(pX+2,pY-1)=='$')
	{
	erasePlayer();
  pX = pX+1;
  printPlayer();
  }
 if(getCharAtxy(pX, pY-1) == ' '){
  erasePlayer();
  pY= pY-1;
  printPlayer();
}
}      

// maze
 
void printMaze()
{
  setcolor(2);

    cout << "##################################################################################################################################################" << endl;
    cout << "##################################################################################################################################################" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##                                                                                                                                              ##" << endl;
    cout << "##################################################################################################################################################" << endl;
    cout << "##################################################################################################################################################" << endl;
}

  void gotoxy(int x, int y)
    {	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), coordinates);
}
  char getCharAtxy (short int x, short int y)
  {
    CHAR_INFO ci;
    COORD xy = {0,0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
   return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE) , &ci, coordBufSize , xy , &rect) ? ci.Char.AsciiChar: ' ';
  } 

  // set color
string setcolor(unsigned short color) {
  HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hcon, color);
  return "";
}
