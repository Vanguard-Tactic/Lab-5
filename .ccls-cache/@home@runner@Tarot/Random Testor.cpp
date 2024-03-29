#include <iostream>
#include <cstdlib>
using namespace std;

void summon (int a)
{
  cout << "Summoning " << a << " monsters!\n";
}

string NOW (string a)
{
  a = "FLAME";
  //b = "BURST";
  return (a);
}

double add (double a)
{
  a = a*2;
  return a;
}

/*bool Path(bool vs)
{
  if (5)
  {
    
  }
}*/


int main()
{
  /*cout << "Hello World!\n";
  summon(5);

  string climax;
  cout << NOW(climax);
  cout << ("\n");
  

  double a_inh = 8;
  cout << add(a_inh);
  cout << ("\n");
  */

  srand (time(NULL));
 
  for (int i = 0; i < 5;i++)
    {
    int rng = 1 + rand() % 20;
    cout << rng << "\n";
    }

 

  return 0;
  
}