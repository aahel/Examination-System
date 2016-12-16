#include<iostream>
#include<fstream>
#include<string>
#include"mid_sem_sitting.cpp"
#include"end_sem_sitting.cpp"
#include"even_sem_quiz_sitting.cpp"
#include"odd_sem_quiz_sitting.cpp"
#include"login.cpp"
#include"odd_midsem_schedule.cpp"
#include"odd_endsem_schedule.cpp"
#include"even_end_sem_schedule.cpp"
#include"even_mid_sem_schedule.cpp"

using namespace std;

class student_Interface
{
public:
virtual int view_grade(void)=0;
virtual int schedule(void)=0;
virtual int sitting_arrangement(void)=0;
virtual int ranklist(void)=0;
virtual int change_password(void)=0;
virtual int student(void)=0;
};




class student_details:public student_Interface,public user_login
{
public:
 int view_grade(){
     string str,str4;
     int a;
 	fstream ob,ob1,ob2;

 	m["11"]="1stcseoddsem.csv";
 	m["12"]="1stetcoddsem.csv";
 	m["13"]="1steeeoddsem.csv";
 	m["14"]="1stitoddsem.csv";
 	m["21"]="1stcseevensem.csv";
 	m["22"]="1stetcevensem.csv";
 	m["23"]="1steeeevensem.csv";
 	m["24"]="1stitevensem.csv";
 	m["31"]="2ndcseoddsem.csv";
 	m["32"]="2ndetcoddsem.csv";
 	m["33"]="2ndeeeoddsem.csv";
 	m["34"]="2nditoddsem.csv";
 	m["41"]="2ndcseevensem.csv";
 	m["42"]="2ndetcevensem.csv";
 	m["43"]="2ndeeeevensem.csv";
 	m["44"]="2nditevensem.csv";
 	m["51"]="3rdcseoddsem.csv";
 	m["52"]="3rdetcoddsem.csv";
 	m["53"]="3rdeeeoddsem.csv";
 	m["54"]="3rditoddsem.csv";
 	m["61"]="3rdcseevensem.csv";
 	m["62"]="3rdetcevensem.csv";
 	m["63"]="3rdeeeevensem.csv";
 	m["64"]="3rditevensem.csv";
 	m["71"]="4thcseoddsem.csv";
 	m["72"]="4thetcoddsem.csv";
 	m["73"]="4theeeoddsem.csv";
 	m["74"]="4thitoddsem.csv";
 	m["81"]="4thcseevensem.csv";
 	m["82"]="4thetcevensem.csv";
 	m["83"]="4theeeevensem.csv";
 	m["84"]="4thitevensem.csv";

 	cout<<"If you are in odd semister press 1 or else 2"<<endl;
 	cin>>a;
 	if(a==1)
    {
 	ob.open("oddmap.csv",ios::in);
    ob2.open("oddsub.csv",ios::in);

    while(ob2)
    {
      getline(ob2,str4,',');
      cout<<str4;
    }
}
 	else
    {
 	ob.open("evenmap.csv",ios::in);
    ob2.open("oddsub.csv",ios::in);
    while(ob2)
    {
      getline(ob2,str4,',');
      cout<<str4;
    }
}


 	while(ob)
 	{

 		if(str==username)
 		break;
 		else
 		getline(ob,str,',');

 	}
 	getline(ob,str,',');


 	ob1.open(m[str],ios::in);


 	while(ob1)
 	{

 		if(str==username)
 		break;
 		else
 		getline(ob1,str,',');
 	}








 	int i,j;

 	for(i=0;i<6;i++)
 	{
 		cout<<"                              "<<endl;
 		cout<<"                              "<<endl;
 		cout<<"                              "<<endl;
 		cout<<"                              "<<endl;
 		cout<<"Sub"<<i+1<<endl;
 		for(j=1;j<6;j++)
 		{
 			switch(j)
 			{
 				case 1:
 					   {
 							cout<<"midsem=";
 							break;
 					   }
 				case 2:
 					   {
 							cout<<"endsem=";
 							break;
 					   }
 				case 3:
 					   {
 							cout<<"quiz=";
 							break;
 					   }
 				case 4:
 					   {
 							cout<<"teacher's assegnment=";
 							break;
 					   }
 				case 5:
 					   {
 							cout<<"SG=";
 							break;
 					   }
 			}

 			getline(ob1,str,',');
 			cout<<str<<endl;

 		}
 	}
    getline(ob1,str,',');


    cout<<"CGPA="<<str<<endl;

 	ob.close();
 	ob1.close();

}

 int main_menu(){
     system("clear");
    return(student());

}
 int schedule(){
     int ch;
     while(1){
     cout<<"1. odd midsem"<<endl<<"2. even midsem"<<endl<<"3. odd end sem"<<endl<<"4.even end sem"<<endl<<"5.Main Menu"<<endl;
     cout<<"enter your choice"<<endl;
     cin>>ch;
     switch (ch) {
         case 1:odd_mid_sem();
         break;
         case 2:even_mid_sem();
         break;
         case 3:odd_end_sem();
         break;
         case 4:even_end_sem();
         break;
         case 5:return(main_menu());
         break;
         default:cout<<"wrong choice"<<endl;
     }


}
}


 int sitting_arrangement(){
    int ch;
    while(1){
    cout<<"1. end sem sitting"<<endl<<"2. mid sem sitting"<<endl<<"3. even sem quiz sitting"<<endl<<"4.odd sem quiz sitting"<<endl<<"5.Main Menu"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>ch;
    switch (ch) {
        case 1:end_sem_sitting();
        break;
        case 2:mid_sem_sitting();
        break;
        case 3:even_sem_quiz_sitting();
        break;
        case 4:odd_sem_quiz_sitting();
        break;
        case 5:return(main_menu());
        break;
        default:cout<<"wrong choice"<<endl;
    }



}
}
 int ranklist(){

}
int change_password(){
    string op,np,cnp,a,str;
    fstream f;

    while(1){
    cout<<"OLD PASSWORD ----> ";
    cin>>op;
    if(op==m[username])
    break;
    else
    cout<<"wrong password"<<endl;
}
    f.open("pass.csv",ios::in);


    while(a!=username)
    {
    getline(f,a,',');

   }
    cout<<"NEW PASSWORD ----> ";;
    cin>>np;
    while(1){
    cout<<"CONFIRM NEW PASSWORD ---->";
    cin>>cnp;
    if(cnp==np)
    break;
    else
    cout<<"wrong password"<<endl;
}
fstream f1;
f1.open("temp.csv",ios::out);
f.seekg(0);

while(!f.eof()){
    getline(f,str,',');
if(str=="\n")
break;
  if(str==m[username])
    {

f1<<cnp<<',';

    }
    else
    {
    f1<<str<<',';
}
}
remove("pass.csv");
rename("temp.csv","pass.csv");

    f1.close();

    return(main_menu());

}

int student(){
cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
cout<<"                                    WELCOME                                                              "<<endl;
cout<<"---------------------------------------------------------------------------------------------------------"<<endl;

int f=0;
char ch;
while(1){
cout<<"1. VIEW GRADE"<<endl<<"2. SCHEDULE"<<endl<<"3. SITTING ARRANGEMENT"<<endl<<"4. CHANGE PASSWORD"<<endl<<"5. LOGOUT"<<endl;
cout<<"enter your choice"<<endl;
cin>>ch;

switch(ch){

case '1':system("clear");
view_grade();
       break;

case '2': system("clear");
return(schedule());
       break;
case '3': system("clear");
return(sitting_arrangement());
       break;

case '4':system("clear");
return(change_password());
break;
case '5':system("clear");
return 1;
break;


default: cout<<"INVALID CHOICE"<<endl;



}

}

}
};
