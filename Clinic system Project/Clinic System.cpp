#include<iostream>
using namespace std;
#define PERSONS_LIMIT 100
#define li cout<<endl;
#include <string.h>
#include <fstream>

string doc[5]={"Dr.Uzaif", "Dr.Saad", "Dr.Hassaan", "Dr.Abdullah", "Dr.Hamid"};
int countPersons = 0;

const int monthDays[12]
    = { 31, 28, 31, 30, 31, 30,
       31, 31, 30, 31, 30, 31 }; 
       
struct date{
	int d , m , y;
};

class Persons{
public:
int Id;
string Name;
int Age;
char Dob[20];
char Date[20];
char Gender;
string Checkup;
string Doctor;
};

Persons obj[PERSONS_LIMIT];

void input(){

if(countPersons<PERSONS_LIMIT)
{
	cout<<" Enter id (number): ";
	cin>>obj[countPersons].Id;
	cout<<" Enter Name : ";
	getline(cin.ignore(),obj[countPersons].Name);
	cout<<" Enter Date (dd-mm-yy) : ";
	cin>>obj[countPersons].Date;
	cout<<" Enter Age (number): ";
	cin>>obj[countPersons].Age;
	cout<<" Enter DOB (dd-mm-yy): ";
	cin>>obj[countPersons].Dob;
	cout<<" Enter Gender (M/F) : ";
	cin>>obj[countPersons].Gender; li
	cout<<" Which Checkup You want To Do : "; li
	cout<<" Enter From the below given list: "; li
	cout<<"\t~Neuro \n\t~Cardio \n\t~Orthopedic \n\t~General \n\t~Psychiatrist "; li li
	cout<<" Enter Your Choice: ";
	getline(cin.ignore(),obj[countPersons].Checkup);

	if(obj[countPersons].Checkup=="Neuro" || obj[countPersons].Checkup=="neuro"){
			obj[countPersons].Doctor=doc[0];
		}
	else if(obj[countPersons].Checkup=="Cardio" || obj[countPersons].Checkup=="cardio"){
			obj[countPersons].Doctor=doc[1];
		}
	else if(obj[countPersons].Checkup=="Orthopedic" || obj[countPersons].Checkup=="orthopedic"){
			obj[countPersons].Doctor=doc[2];
		}
	else if(obj[countPersons].Checkup=="General" || obj[countPersons].Checkup=="general"){
			obj[countPersons].Doctor=doc[3];
		}	
	else if(obj[countPersons].Checkup=="Psychiatrist" || obj[countPersons].Checkup=="psychiatrist"){
			obj[countPersons].Doctor=doc[4];
		}
	else {
	cout<<"wrong entry";
		}
	countPersons++;  
}

else
{
	cout<<"\n Error : Limit is only " << PERSONS_LIMIT;
}
	cout<<"Your Data is Stored ! "; li
	system ("CLS");
}

void printAll(){
		cout<<"\n **** **** Printing All Records **** ****";  li
		cout<<"\n Total number of persons : "<<countPersons; li li 
for(int i=0;i<countPersons;i++){
		cout<<" Id : "<< obj[i].Id;li
		cout<<" Name : "<<obj[i].Name;li
		cout<<" Age : "<<obj[i].Age;li
		cout<<" DOB : "<<obj[i].Dob;li
		cout<<" Gender : "<<obj[i].Gender;li
		cout<<" Appointment For : "<<obj[i].Checkup<<" Checkup"; li 
		cout<<" Appointment with "<<obj[i].Doctor;li
		cout<<"____________________________________________"; li li
}    
}

void printbyAge(){
	cout<<"\n ******** Printing All Records by Age ********";   
	int count50plus =0;
	int count40plus=0;
	int lessthen40=0;
	cout<<"\n*** People greater than 50 ***";
for(int i=0;i<countPersons;i++){
	
	if(obj[i].Age > 50){
		count50plus++;
		cout<<"\n Id : "<< obj[i].Id; li
		cout<<" Name : "<<obj[i].Name;li
		cout<<" Age : "<<obj[i].Age;li
		cout<<" DOB : "<<obj[i].Dob;li
		cout<<" Gender : "<<obj[i].Gender;li
		cout<<" Appointment For : "<<obj[i].Checkup<<" Checkup";li
		cout<<" Appointment with "<<obj[i].Doctor;li
		cout<<"____________________________________________";li
		} 
}

	cout<<"\n*** People greater than 40 and less than 50 ***";
for(int i=0;i<countPersons;i++){
	
	 if(obj[i].Age > 40 && obj[i].Age < 50){
		count40plus++;
		cout<<"\n Id : "<< obj[i].Id; li
		cout<<" Name : "<<obj[i].Name;li
		cout<<" Age : "<<obj[i].Age;li
		cout<<" DOB : "<<obj[i].Dob;li
		cout<<" Gender : "<<obj[i].Gender;li
		cout<<" Appointment For : "<<obj[i].Checkup<<" Checkup";li
		cout<<" Appointment with "<<obj[i].Doctor;li
		cout<<"____________________________________________";li
		
		} 
}

	cout<<"\n*** People less than 40 ***";li
for(int i=0;i<countPersons;i++){
	
	if(obj[i].Age < 40)
		lessthen40++;
		cout<<"\n Id : "<< obj[i].Id; li
		cout<<" Name : "<<obj[i].Name;li
		cout<<" Age : "<<obj[i].Age;li
		cout<<" DOB : "<<obj[i].Dob;li
		cout<<" Gender : "<<obj[i].Gender;li
		cout<<" Appointment For : "<<obj[i].Checkup<<" Checkup";li
		cout<<" Appointment with "<<obj[i].Doctor;li
		cout<<"____________________________________________";li
}

 li
		cout<<"\n Persons greater than 50 : "<<count50plus;
		cout<<"\n Persons between 40 and 50 : "<<count40plus;
		cout<<"\n Persons less than 40 : "<<lessthen40;
}

void printbygender(){
		cout<<"\n ******** Printing All Records by Gender ********";   li li
		int malecount =0;
		int femalcount=0;
		
		cout<<"**** Male Patients ****";li li
for(int i=0;i<countPersons;i++){
	
	if(obj[i].Gender =='M'|| obj[i].Gender =='m'){
		cout<<"\n Id : "<< obj[i].Id;li
		cout<<" Name : "<<obj[i].Name;li
		cout<<" Age : "<<obj[i].Age;li
		cout<<" DOB : "<<obj[i].Dob;li
		cout<<" Gender : "<<obj[i].Gender;li
		cout<<" Appointment For : "<<obj[i].Checkup<<" Checkup";li
		cout<<" Appointment with "<<obj[i].Doctor;li
		cout<<"____________________________________________";li
		malecount++;
		}
}
	cout<<" **** Female Patients ****"; li li
for(int i=0;i<countPersons;i++){

	if(obj[i].Gender=='F'|| obj[i].Gender =='f'){
		
		cout<<"\n Id : "<< obj[i].Id;li
		cout<<" Name : "<<obj[i].Name;li
		cout<<" Age : "<<obj[i].Age;li
		cout<<" DOB : "<<obj[i].Dob;li
		cout<<" Gender : "<<obj[i].Gender;li
		cout<<" Appointment For : "<<obj[i].Checkup<<" Checkup";li
		cout<<" Appointment with "<<obj[i].Doctor;li
		cout<<"____________________________________________";li
		femalcount++;
		}
}
li
	cout<<"\n Number of Male : "<< malecount;
	cout<<"\n Number of Female : "<< femalcount;
}
void printbyid(){
	int id=0;
	cout<<"\n******** Printing Records By Id ******** "; li
	cout<<" Enter Id Of Patient : ";
	cin>>id;
	for(int i=0;i<countPersons;i++){
		if(id==obj[i].Id){
		 cout<<"\n Id : "<< obj[i].Id;li
		 cout<<" Name : "<<obj[i].Name;li
		 cout<<" Age : "<<obj[i].Age;li
		 cout<<" DOB : "<<obj[i].Dob;li
		 cout<<" Gender : "<<obj[i].Gender;li
		 cout<<" Appointment For : "<<obj[i].Checkup<<" Checkup";li
		 cout<<" Appointment with "<<obj[i].Doctor;li
		 cout<<"____________________________________________";li
		}
	}
}

void printbydoctor(){
	string doc;
		cout<<"\n******** Printing records By name of Doctor ******** "; li li
		cout<<" Enter Correct Name of Doctor : ";
		getline(cin.ignore(),doc);
	int patients=0;
	for(int i=0; i<countPersons; i++){
		
		if(doc==obj[i].Doctor){
			cout<<"\n Id : "<< obj[i].Id;li
			cout<<" Name : "<<obj[i].Name;li
			cout<<" Age : "<<obj[i].Age;li
			cout<<" DOB : "<<obj[i].Dob;li
			cout<<" Gender : "<<obj[i].Gender;li
			cout<<" Appointment For : "<<obj[i].Checkup<<" Checkup";li
			cout<<" Appointment with "<<obj[i].Doctor;li
			cout<<"____________________________________________";li
				patients++;	
		}
	}    li li
			if(doc=="Dr.Uzaif"){
				cout<<" The no of Patients Attended: "<<patients; li
				cout<<" Doctor's Earning: "<<patients*2500<<" Rs";
			}
			else if(doc=="Dr.Saad"){
				cout<<" The no of Patients Attended: "<<patients; li
				cout<<" Doctor's Earning: "<<patients*1900<<" Rs";
			}
			else if(doc=="Dr.Hassaan"){
				cout<<" The no of Patients Attended: "<<patients; li
				cout<<" Doctor's Earning: "<<patients*1700<<" Rs";
			}
			else if(doc=="Dr.Abdullah"){
				cout<<" The no of Patients Attended: "<<patients; li
				cout<<" Doctor's Earning: "<<patients*1500<<" Rs";
			}
			else if(doc=="Dr.Hamid"){
				cout<<" The no of Patients Attended: "<<patients;
				cout<<" Doctor's Earning: "<<patients*2000<<" Rs";
			}
}
int day(date dt1 , date dt2){
	 // COUNT TOTAL NUMBER OF DAYS
    // BEFORE FIRST DATE 'dt1'
 
    // initialize count using years and day
    long int n1 = dt1.y * 365 + dt1.d;
 
    // Add days for months in given date
    for (int i = 0; i < dt1.m - 1; i++)
        n1 += monthDays[i];
 

    // SIMILARLY, COUNT TOTAL NUMBER OF
    // DAYS BEFORE 'dt2'
 
    long int n2 = dt2.y * 365 + dt2.d;
    for (int i = 0; i < dt2.m - 1; i++)
        n2 += monthDays[i];
 
    // return difference between two counts
    return (n2 - n1);
}
int bill (int *doctorFee,int  *days){
   		return (*days) * 5000 + (*doctorFee);  	
}
void printrecipt(){
	int id=0;
	cout<<"\n******** Printing Reciept Of Patient ******** "; li
	cout<<" Enter Id Of Patient : ";
	cin>>id;
	
	date dt1;
	cout<<" Enter Date of Arrival: ";li
	cout<<" Day(dd): ";
	cin>>dt1.d;
	cout<<" Month(mm): ";
	cin>>dt1.m;
	cout<<" Year(yyyy): ";
	cin>>dt1.y;
	li
	date dt2;
	cout<<" Enter Date of Departure: ";li
	cout<<" Day(dd): ";
	cin>>dt2.d;
	cout<<" Month(mm): ";
	cin>>dt2.m;
	cout<<" Year(yyyy): ";
	cin>>dt2.y;
	
	  int days = day(dt1 , dt2);
		
	  int doctorFee;

	for(int i=0; i<countPersons; i++){
		if(id==obj[i].Id){
			
				if(obj[i].Checkup=="Neuro" || obj[i].Checkup=="neuro"){
					doctorFee = 2500;
				}	
				else if(obj[i].Checkup=="Cardio" || obj[i].Checkup=="cardio"){
					doctorFee = 1900;
				}
				else if(obj[i].Checkup=="Orthopedic" || obj[i].Checkup=="orthopedic"){
					doctorFee = 1700;
				}
				else if(obj[i].Checkup=="General" || obj[i].Checkup=="general"){
					doctorFee = 1500; 
				}
				else if(obj[i].Checkup=="Psychiatrist" || obj[i].Checkup=="psychiatrist"){
					doctorFee = 2000;
				}
				li 
			cout<<" \t \t THE RECIPT HAS BEEN GENERATED !!! ";
	
	int netBill = bill(&doctorFee, &days);
	
	ofstream file("Patient Recipet.txt");
	file<<"\n\tId : "<< obj[i].Id; li
	file<<"\n\tName : "<<obj[i].Name;
	file<<"\n\tAge : "<<obj[i].Age;
	file<<"\n\tDOB : "<<obj[i].Dob;
	file<<"\n\tGender : "<<obj[i].Gender;
	file<<"\n\tAppointment For : "<<obj[i].Checkup<<" Checkup";
	file<<"\n\tAppointment with : "<<obj[i].Doctor; 
	file<<"\n\tDays stayed : "<<days;
	file<<"\n\tDoctor's Fee : "<<doctorFee<<" Rs";
	file<<"\n\tHospital Charges per Day:\n\t\t ~ Room Charges: 3500 Rs \n\t\t ~ Medications: 1000 Rs \n\t\t ~ Others: 500 Rs ";
	file<<"\n\t*********************************";
	file<<"\n\tNet Charges : "<<netBill;
	file.close();
		}
	}
}

printbyname(){
	string pname;
	cout<<"\n******** Printing Record By Name of Patient ******** "; li
	cout<<" Enter Name : ";
	getline(cin.ignore(),pname);
	
for(int i=0;i<countPersons;i++){
		if(pname==obj[i].Name){
			cout<<"\nId : "<< obj[i].Id;li
			cout<<" Name : "<<obj[i].Name;li
			cout<<" Age : "<<obj[i].Age;li
			cout<<" DOB : "<<obj[i].Dob;li
			cout<<" Gender : "<<obj[i].Gender;li
			cout<<" Appointment For : "<<obj[i].Checkup<<" Checkup";li
			cout<<" Appointment with "<<obj[i].Doctor;li
			cout<<"____________________________________________";li
		}
	}
}

main(){
    
 int choice = -1;
 system("Color 70");
 	cout<<"\t\t\t\t  ___________________________________________________ ";li
 	cout<<"\t\t\t\t |                                                   |";li
 	cout<<"\t\t\t\t |          CLINIC RECORD AND BILLING SYSTEM         |";li
 	cout<<"\t\t\t\t |___________________________________________________|";li
 	li
 while(choice!=0){
 
  	cout<<"\n\n\t Please Select From Propmt List ";
  	cout<<"\n\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"; li 
  	cout<<"\n\t 1. Input Records ";
  	cout<<"\n\t 2. Print All Records";
  	cout<<"\n\t 3. Print by Age";
  	cout<<"\n\t 4. Print by Gender";
  	cout<<"\n\t 5. Print by Id ";
  	cout<<"\n\t 6. Print by Doctor Name";
  	cout<<"\n\t 7. Print by Name of Patient";
  	cout<<"\n\t 8. Print Recipt of Patient";
  	cout<<"\n\t 0. to exit";
  li
  	cout<<"\n\t Enter your choice : ";
  	cin>>choice;
  li 
  switch(choice){
      
      case 1: input(); break;
      case 2: printAll();break;
      case 3: printbyAge(); break;
      case 4: printbygender(); break;
      case 5:printbyid(); break;
      case 6:printbydoctor(); break;
      case 7:printbyname(); break;
      case 8:printrecipt(); break;
      case 0: cout<<"\n thank you for using software !!";break;
      default: cout<<"\n Error: Invalid Selection";
  }
 }    
}
