
#include<iostream>
#include<map>
#include<fstream>

using namespace std;
class user_login
{

public:
static string username;
static map<string,string> m;
int login(){


string password;
fstream f;
f.open("pass.csv",ios::in);
char ch;
while(!f.eof()){
    getline(f,username,',');

    getline(f,password,',');


m[username]=password;

}
while(1){
cout<<"enter username ---->";
cin>>username;
cout<<endl<<"enter password ---->";

cin>>password;


if(m[username]==password)
{

system("clear");
if(username=="admin")
return 2;
else
return 1;

}
else
cout<<"invalid username or password"<<endl;

}




}
};
string user_login::username;
 map<string,string> user_login::m;
