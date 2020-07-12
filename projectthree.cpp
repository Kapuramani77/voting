#include<iostream>
using namespace std;
int main()
{
  int age;
  cout<<" Enter the age:";
  cin>>age;
  if(age>=18)
  {
      cout<<"You are eligible for vote";
  }
  else{
    cout<<"You are not eligible for vote";
  }
  char condition_variable;
  cout<<"\n Enter eligibility condition:";
  cin>>condition_variable;
  switch(condition_variable)
  {
  case 1:
    cout<<"\n Enroll ordinary place of residence, case 1";

    break;
  case 2:
    cout<<"\n Enrollment only at one place, case 2 ";

    break;
  case 3:
    cout<<"\n Resident at their home address, case 3";

    break;
  default:
    cout<<"\n condition_variable other than cases 1,2 and 3";
    break;
  }
  return 0;
}
