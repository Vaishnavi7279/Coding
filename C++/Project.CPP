//header files
#include<iostream>
#include<conio.h>
//#include<dos.h>
#include<direct.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;
//student class declaration
class student
{
  //private members
  int rno;
  char name[20];
  int long phone;
  char dob[15];
  char subject[20];
  float percentage,subPer;
  int id;
  //nested class
  class address
    {
      public:
      int houseNo;
      char society[30];
      char district[20];
      char city[10];
    }a;
  //public members
  public:
  //function1 for entering the data
  void enterData()
    {
      cout<<"Enter rno-";
	  cin>>rno;
      cout<<"Enter name-";
	  gets(name);
      cout<<"Enter contact-";
	  cin>>phone;
      cout<<"Enter date of birth-";
	  gets(dob);
      cout<<"Enter percentage-";
	  cin>>percentage;
      cout<<"Enter the subject for exam-";
	  gets(subject);
      cout<<"Enter the subject percentage-";
	  cin>>subPer;
      cout<<"Enter address-"<<endl;
	  cout<<"Enter house no-";
	      cin>>a.houseNo;
	  cout<<"Enter society-"<<endl;
	      gets(a.society);
	  cout<<"Enter district-"<<endl;
	      gets(a.district);
	  cout<<"Enter city-"<<endl;
	      gets(a.city);
    }
  //function2 for confirming the registration and providing a registration ID
  void registration()
    {
      {
	    randomize();
	    int i=5000;
	    id=random(i);
      }
      cout<<"SUCCESSFULLY REGISTERED : EXAM ID no-"<<id;
    }
  //function3 to display the entered data
  void displayData()
    {
      cout<<"DESIRED DETAILS ARE-"<<endl;
      cout<<"Roll no-"<<rno<<endl;
      cout<<"Name-";
	  puts(name);
      cout<<"Contact-"<<phone<<endl;
      cout<<"Date of birth-";
	  puts(dob);
      cout<<"Percentage-"<<percentage<<endl;
      cout<<"Subject for exam-";
	  puts(subject);
      cout<<"Subject percentage-"<<subPer<<endl;
      cout<<"Exam ID no-"<<id<<endl;
      cout<<"Address-"<<endl;
	  cout<<"House no-"<<a.houseNo;
	  cout<<"Society-";
	      puts(a.society);
	  cout<<"District-";
	      puts(a.district);
	  cout<<"City-"<<endl;
	      puts(a.city);
    }
  //function for returing the roll number to access data
  int retrno()
    {
      return rno;
    }
  //function to modify the data
  void modify()
    {
      cout<<"Roll no-"<<rno;
      cout<<endl<<"ENTER NEW DETAILS-"<<endl;
      char nm[20];
      int long ph;
      char Dob[15],sub[20];
      float per,sPer;
      int iD,hNo,no;
      char scty[30],dstrct[20],cty[10];
      cout<<"Enter new rno(Enter'1'to retain old one)-";
	  cin>>no;
      cout<<"Enter new name(Enter'.'to retain old one)-";
	  gets(nm);
      cout<<"Enter new contact(Enter'1'to retain old one)-";
	  cin>>ph;
      cout<<"Enter new date of birth(Enter'.'to retain old one)-";
	  gets(Dob);
      cout<<"Enter new percentage(Enter'1'to retain old one)-";
	  cin>>per;
      cout<<"Enter the new subject for exam(Enter'.'to retain old one)-";
	  gets(sub);
      cout<<"Enter the new subject percentage(Enter'1'to retain old one)-";
	  cin>>sPer;
      cout<<"Enter new address(Enter'.'to retain old one)-"<<endl;
	  cout<<"Enter new house no(Enter'1'to retain old one)-";
	      cin>>hNo;
	  cout<<"Enter new society(Enter'.'to retain old one)-"<<endl;
	      gets(scty);
	  cout<<"Enter new district(Enter'.'to retain old one)-"<<endl;
	      gets(dstrct);
	  cout<<"Enter new city(Enter'.'to retain old one)-"<<endl;
	      gets(cty);
      if(strcmpi(nm,".")!=0)
	strcpy(name,nm);
      if(strcmpi(Dob,".")!=0)
	strcpy(dob,Dob);
      if(strcmpi(sub,".")!=0)
	strcpy(subject,sub);
      if(strcmpi(scty,".")!=0)
	strcpy(a.society,scty);
      if(strcmpi(dstrct,".")!=0)
	strcpy(a.district,dstrct);
      if(strcmpi(cty,".")!=0)
	strcpy(a.city,cty);
      if(ph!=1)
	phone=ph;
      if(percentage!=1)
	percentage=per;
      if(sPer!=1)
	subPer=sPer;
      if(hNo!=1)
	a.houseNo=hNo;
      if(no!=1)
	rno=no;
    }
};
//main function
void main()
  {
    clrscr();
    char ch,ch1,ch2,ch3;
    student s1,s2;
    //main page;headings
    {
      //moving headings
      {
	     for(int i=1;i<=51;i++)
	       {
	         clrscr();
	         gotoxy(i,12);
	         cout<<"EDUCATION INSTITUTE BANGALORE";
	         delay(120);
	       }
      }
      //main page
      {
	     clrscr();
    	 gotoxy(26,11);
	     cout<<"EDUCATION INSTITUTE BANGALORE";
	     gotoxy(22,12);
	     cout<<"____EXAM FOR CLASS XII CANDIDATES____";
	     gotoxy(32,13);
	     cout<<"STUDENTS' RECORDS";
	     gotoxy(21,14);
	     cout<<"(To be entered by class incharge only)";
	     gotoxy(1,24);
	     cout<<"To continue,press C/c-";
	     gotoxy(60,24);
	     cout<<"To leave,press E/e-";
	     cin>>ch;
      }
    }
    //to continue
    if(ch=='C'||ch=='c')
      {
	     clrscr();
	     //entering data/continuation
	     ofstream fo("student.dat",ios::app|ios::binary);
	     char ch1='y';
	     while(ch1=='Y'||ch1=='y')
	     {
	       s1.enterData();
	       s1.registration();
	       fo.write((char *)&s1,sizeof(s1));
	       cout<<endl<<"Record added to the file";
	       cout<<endl<<"Enter more records?(Y/N) : ";
		   cin>>ch1;
	     }
	     fo.close();
	     //discontinued registration
	     if(ch1!='Y'||ch1!='y')
	       {
	         cout<<"Exit?(Y/N) : ";
		     cin>>ch2;
	         //yes-saving,exiting
	         if(ch2=='Y'||ch2=='y')
	           {
		          clrscr();
		          gotoxy(32,13);
		          cout<<"SAVED SUCCESSFULLY";
		          exit(0);
	           }
	     //no-further operations
	     else
	        {
		     cout<<"Display(d)/Modify(M)/Delete(D)/Search(S)? : ";
		     cin>>ch3;
		     if(ch3=='d'||ch3=='D')
		       { 
				 student s;
		         ifstream fin("student.dat",ios::binary);
		         while(!fin.eof())
			          {
			             fin.read((char*)&s,sizeof(s));
			             s.displayData();
		              }
		         fin.close();
		       }
		 //modification
		 if(ch3=='M'||ch3=='m')
		   {
		     fstream fio("student.dat",ios::in|ios::out|ios::binary);
		     int rno1;
		     int long pos;
		     char found='f';
		     cout<<"Enter roll no of the record to be modified-";
			 cin>>rno1;
		     while(!fio.eof())
		       {
			     pos=fio.tellg();
			     fio.read((char *)&s1,sizeof(s1));
			     if(s1.retrno()==rno1)
			       {
			         s1.modify();
			         fio.seekg(pos);
			         fio.write((char *)&s1,sizeof(s1));
			         found='t';
			         break;
			       }
		       }
		     if(found=='f')
		       cout<<"Record not found";
		     fio.seekg(0);
		     cout<<"RECORD MODIFIED SUCCESSFULLY";
		     while(!fio.eof())
		       {
			     fio.read((char *)&s2,sizeof(s2));
			     s2.displayData();
		       }
		     fio.close();
		  }
		//deletion
		else if(ch3=='D'||ch3=='d')
		  {
		    ifstream fio("student.dat",ios::in);
		    ofstream file("temp.dat",ios::out);
		    int rno1;
		    char found='f',confirm;
		    cout<<"Enter roll no of the record to be deleted-";
			cin>>rno1;
		    while(!fio.eof())
		      {
			fio.read((char *)&s1,sizeof(s1));
			if(s1.retrno()==rno1)
			  {
			    found='t';
			    cout<<"Are you sure you want to delete this record?(Y/N) : ";
				cin>>confirm;
			    if(confirm=='N'||confirm=='n')
			      file.write((char *)&s1,sizeof(s1));
			  }
			else
			  file.write((char *)&s1,sizeof(s1));
		      }
		    if(found=='f')
		      cout<<"Record not found";
		    fio.close();
		    file.close();
		    remove("student.dat");
		    rename("temp.dat","student.dat");
		    fio.open("Student.dat",ios::in);
		    cout<<"RECORD DELETED SUCCESSFULLY";
		    while(!fio.eof())
		      {
			fio.read((char *)&s2,sizeof(s2));
			if(fio.eof())
			  break;
			s2.displayData();
		      }
		    fio.close();
		  }
		//searching
		else if(ch3=='S'||ch3=='s')
		  {
		    int rno1;
		    char found='n';
		    ifstream fio("student.dat",ios::in);
		    cout<<"Enter roll no of the record to be searched-";
			cin>>rno1;
		    while(!fio.eof())
		      {
			fio.read((char *)&s1,sizeof(s1));
			if(s1.retrno()==rno1)
			  {
			    found='y';
			    cout<<"RECORD FOUND";
			    s1.displayData();
			    break;
			  }
		      }
		    if(found!='y')
		      cout<<"Record not found";
		    fio.close();
		  }
	      }
	  }
      }
    //to exit
    else
      {
	exit(0);
      }

    getch();
    }

