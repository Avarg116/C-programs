#include <iostream>
using namespace std;

int main()
{
   int highwayNumber;
   int right;
   
   cin >> highwayNumber;
   
   // Primary
   if((highwayNumber <= 99) && (highwayNumber >= 1))
   {
      cout << "The " << highwayNumber << " is primary, ";
      
      // Direction
      if(highwayNumber % 2 == 0)
      {
         cout << "going east/west." << endl;
      }
      else
      {
         cout << "going north/south." <<endl;
      }
   }
   
   // Auxiliary
   else if((highwayNumber <= 999) && (highwayNumber >= 100))
   {
      cout << "The " << highwayNumber << " is auxiliary, ";
      
      // Rightmost 2 digits
      right= highwayNumber % 100;
      cout << "serving the " << right << ", ";
      
      // Direction
      if(highwayNumber % 2 == 0)
      {
         cout << "going east/west." << endl;
      }
      else
      {
         cout << "going north/south." <<endl;
      }
   }
}//End of main