/* This C++ app will help you to know your type of symptoms at the pandemic COVID-19. All symptoms source by Mayo Clinic: CDC*/

#include<iostream>
#include<cmath>
using namespace std;

int symptomsSelect(){

//start main function
cout<<"---------------------Know your symptoms-----------------------"<< endl;
string name;
cout<<"Enter your last name: ";
cin>>name;
char symptoms;
int choice = 1 ;
do{
  cout<<"\n"<<"\n-------------Hi "<<name<<", please select your symptoms type-------------" << endl<< endl;
  cout << "Type A or a for Cough \n" << "Type B or b for Dry Cough" << endl;
  cout << "Type C or c for Headche\n"<<"Type D or d for Runny Nose" << endl;
  cout << "Type E or e for Red eyes\n"<<"Type F or f for Sneezing" << endl;
  cout << "Type G or g for Sudden Fever\n"<<"Type H or h for Sore Throat" << endl;
  cout << "Type I or i for Difficulty Breathing\n"<<"Type J or j for Fever" << endl;
  cout <<"Type K or k for Fatigue\n"<<"Type L or l for Joint Pain"<<"\n"<<"\n"<<endl;
  cout<<"----------------------------------------"<<"\n";
  cout << "Please select your symptoms type but not more than 1 letter: ";
  cin>>symptoms;
  if(symptoms == 'A' || symptoms == 'a'){
    cout << "\nOh no "<<name<<", you have a problem! Cough might be caused Flu and Allergy \n"<<"\n" << endl;
  }
  else if(symptoms == 'B' || symptoms == 'b'){
    cout<< "\nOh no "<<name<<", you have a problem! Dry Cough might be caused Covid-19  \n"<<"\n"<< endl;
  }
  else if(symptoms == 'C' || symptoms == 'c'){
    cout << "\nOh no "<<name<< ", you have a problem! Headche might be caused Flu \n"<<"\n" << endl;
  }
  else if(symptoms == 'D' || symptoms == 'd'){
    cout << "\nOh no "<<name<< ", you have a problem! Runny Nose might be caused Flu and Allergy \n"<<"\n" << endl;
  }
  else if(symptoms == 'E' || symptoms == 'e'){
    cout << "\nOh no "<<name<< ", you have a problem! Red eyes might be caused Allergy \n"<<"\n" << endl;
  }
  else if(symptoms == 'F' || symptoms == 'f'){
    cout << "\nOh no "<<name<< ", you have a problem! Sneezing might be caused Allergy \n"<<"\n" << endl;
  }
  else if(symptoms == 'G' || symptoms == 'g'){
    cout << "\nOh no "<<name<< ", you have a problem! Sudden Fever might be caused Flu \n"<<"\n" << endl;
  }
  else if(symptoms == 'H' || symptoms == 'h'){
    cout << "\nOh no "<<name<< ", you have a problem! Sore Throat might be caused Flu \n"<<"\n" << endl;
  }
  else if(symptoms == 'I' || symptoms == 'i'){
    cout << "\nOh no, "<<name<< ", you have a problem! Difficulty Breathing might be caused Covid-19 \n"<<"\n" << endl;
  }
  else if(symptoms == 'J' || symptoms == 'j'){
    cout << "\nOh no, "<<name<< ", you have a problem! Fever might be caused Covid-19 \n"<<"\n" << endl;
  }
  else if(symptoms == 'K' || symptoms == 'k'){
    cout << "\nOh no, "<<name<< ", you have a problem! Fatigue might be caused Flu and Covid-19 \n"<<"\n" << endl;
  }
  else if(symptoms == 'L' || symptoms == 'l'){
    cout << "\nOh no, "<<name<< ", you have a problem! Joint Pain might be caused Flu and Covid-19\n"<<"\n" << endl;
  }
  else {
  cout <<"\nHi, "<<name<<"you have selected invalid a symptoms \n"<<"\n" << endl;
  }
  cout <<"\nDo you want to check again? Type 1 for YES or Any number for NO: ";
  cin>>choice;
}

while(choice==1);
cout<<"\n"<<"\n"<<name<<", Thank you for using the programe | Stay healthy and in safe | All symptoms Source - Mayo Clinic: CDC"<<endl;

 return symptoms;
}

int main(){

//function name
symptomsSelect();


  return 0;
}
