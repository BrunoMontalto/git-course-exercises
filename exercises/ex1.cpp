/* Improve this program using a switch-case. */

#include <iostream>
using namespace std;

int main()
{
  int week;

  /* Input week number from user */
  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  switch(week){
  
  case 1:
    cout << "Monday" << endl;
  case 2:
    cout << "Tuesday" << endl;
  case 3:
    cout << "Wednesday" << endl;
  case 4:
    cout << "Thursday" << endl;
  case 5:
    cout << "Friday" << endl;
  case 6:
    cout << "Saturday" << endl;
  case 7:
    cout << "Sunday" << endl;
  default:
    cout << "Invalid input! Please enter week number between 1-7." << endl;
  
  }

  return 0;
}
