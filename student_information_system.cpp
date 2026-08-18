#include<windows.h>
#include<iostream>
#include<string>
using namespace std;



void get_details(){
	string Fname, Sname, Reg_no, Faculty, Course, Dob;
	int age, course_no;
	
	//SCHOOL HEADER FOR REGISTRATION FORM
	
	cout<<"   *****************************************************************************************************************"<<endl;
	cout<<"   *                                                 WELCOME TO                                                    *"<<endl;
	cout<<"   *                                         METROPOLITAN INTERNATIONAL                                            *"<<endl;
	cout<<"   *                                                 UNIVERSITY                                                    *"<<endl;
	cout<<"   *****************************************************************************************************************"<<endl;
	cout<<"   *                                          STUDENT REGISTRATION FORM                                            *"<<endl;
	cout<<"   *****************************************************************************************************************"<<endl<<endl;
	
	//ENTER STUDENT DETAILS
	
	cout<<"   1.ENTER STUDENT FIRST NAME               :         ";
	cin>>Fname;
	cout<<"\n";
	cout<<"   2.ENTER STUDENT SECOND NAME              :         ";
	cin>>Sname;
	cout<<"\n";
	cout<<"   3.ENTER STUDENT REGISTRATION NO.         :         ";
	cin>>Reg_no;
	cout<<"\n";
	cout<<"   4.ENTER STUDENT FACULTY                  :         ";
	cin>>Faculty;
	cout<<"\n";
	cout<<"   5.ENTER STUDENT COURSE                   :         ";
	cin>>Course;
	cout<<"\n";
	cout<<"   6.ENTER STUDENT DATE OF BIRTH            :         ";
	cin>>Dob;
	cout<<"\n";
	
	system("cls");
	
	
	//DISPLAY STUDENT DETAILS
	
	cout<<"   *****************************************************************************************************************"<<endl;
	cout<<"   *                                                 WELCOME TO                                                    *"<<endl;
	cout<<"   *                                         METROPOLITAN INTERNATIONAL                                            *"<<endl;
	cout<<"   *                                                 UNIVERSITY                                                    *"<<endl;
	cout<<"   *****************************************************************************************************************"<<endl;
	cout<<"   *                                         STUDENT DETAILS RECORDWD                                              *"<<endl;
	cout<<"   *****************************************************************************************************************"<<endl<<endl;
	
	cout<<"   STUDENT FIRST NAME                       :         "<<Fname<<endl;
	cout<<"\n";
	cout<<"   STUDENT SECOND NAME                      :         "<<Sname<<endl;
	cout<<"\n";
	cout<<"   STUDENT REGISTRATION NUMBER              :         "<<Reg_no<<endl;
	cout<<"\n";
	cout<<"   STUDENT FACULTY OF STUDY                 :         "<<Faculty<<endl;
	cout<<"\n";
	cout<<"   STUDENT COURSE OF STUDY                  :         "<<Course<<endl;
	cout<<"\n";
	cout<<"   STUDENT DATE OF BIRTH                    :         "<<Dob<<endl;
	cout<<"\n";
	
}

//LOGIN FORM

void login(){
	string usern, pasw, x, y;
	string Fname, Sname, Reg_no, Faculty, Course, dob;
	int age, course_no;
	
	// SCHOOL HEADER FOR LOGIN FORM
	
	cout<<"   *****************************************************************************************************************"<<endl;
	cout<<"   *                                                 WELCOME TO                                                    *"<<endl;
	cout<<"   *                                         METROPOLITAN INTERNATIONAL                                            *"<<endl;
	cout<<"   *                                                 UNIVERSITY                                                    *"<<endl;
	cout<<"   *****************************************************************************************************************"<<endl;
	cout<<"   *                                                 LOGIN FORM                                                    *"<<endl;
	cout<<"   *****************************************************************************************************************"<<endl<<endl;
	cout<<"                             USERNAME               :         ";
	cin>>usern;
	cout<<"\n";
	cout<<"                             PASSWORD               :         ";
	cin>>pasw;
	
	// USERNAME = ADMIN
	// PASSWORD = Password
	
	if(usern == "Admin" && pasw == "Password"){
			cout<<"                             you've logged in successfully...................";
			Sleep(3000);
			system("cls");	
			get_details();	
		
	}
	
	else{
		system("cls");
		cout<<"                             Incorrect username or password..................."<<endl;
		login();
	}
}

int main(){
	
	login();
	

	return 0;
}
