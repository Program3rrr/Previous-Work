//Author-Aldane Russell
//Lecturer-Henry Osborne
#include <iostream>

using namespace std;

int main()
{
   string NameOfStudnt,PrincipalResponse;
   int grade;
    while(true){   
       cout<<"\nSteths Report Card 2022";
       cout<<"\nPlease Enter Name Of Student(First&Last):";
       //Reads the name that the user inputs 
       cin>>NameOfStudnt; cin>>NameOfStudnt;
       //Requests Grade to be input
       cout<<"Grade:";
       //Reads Grade
       cin>>grade;
       //Prepares the conditions for each individual grades
       if(grade>=0 && grade<=20)
       {
           PrincipalResponse="This is the worst I’ve seen in my 40 years as headmaster of this school.";
       }
       else if(grade>=21 && grade<=40)
       {
           PrincipalResponse="If this child would only pay attention to his work we may actually believe he has a brain.";
       }
       else if(grade>=41 && grade<=60)
       {
           PrincipalResponse="He can do better. Next term he should study more and chase girls less.";
           }
       else if(grade>=61 && grade<=80)
       {
           PrincipalResponse="Good! You may feel proud of your son.";
       }
       else if(grade>=81 && grade<=100)
       {
           PrincipalResponse="We here at school are blessed with children like yours very rarely.";
       }
       //Displays the responses from the principal
       cout<<"PrincipalResponse: "<<PrincipalResponse<<endl;
       cout<<"Would you like to review another student? (Y/N): ";
       char option;
       //Reads the option of the user, to repeat the process or end and move on
       cin>>option;
       if(option=='N')
        break;
    }   
    return 0;
}