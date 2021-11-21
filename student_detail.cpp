/*C++ program to create student class, read and print N student's details 
(Example of array of objects).*/
 
#include <iostream>
using namespace std;
 

class student
{
private:
        char  name[30];
        char branch[10];
        int   rollNo;
        int   total;
        int  oops,daa,dbms,cg,dc;
        
        public:
        //member function to get student's details
        void getDetails(void);
        //member function to print student's details
        void putDetails(void);
};
 
//member function definition, outside of the class
void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter marks of sub: ";
    cin >> oops>>daa>>dbms>>cg>>dc;
    cout << "Enter Branch:";
    cin >> branch; 
     
}
 
//member function definition, outside of the class
void student::putDetails(void){
    cout << "Student details:\n";
    cout << "Name:"<< name << endl <<"Roll Number:" << rollNo << endl;
    cout<<"Marks:" << endl;
    cout<< "OOPs:"<<oops<< endl<<"DAA:"<<daa<< endl<<"DBMS:"<<dbms<< endl<<"CG:"<<cg<< endl<<"DC:"<<dc<<endl;
}
 
int main()
{
    student s1;       
    int n,loop;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(loop=0;loop< n; loop++){
        cout << "Enter details of student " << loop+1 << ":\n";
        s1.getDetails();
    }
     
    cout << endl;
     
    for(loop=0;loop< n; loop++){
        cout << "Details of student " << (loop+1) << ":\n";
        s1.putDetails();
    }
     
    return 0;
}
