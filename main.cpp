

#include<iostream>
#include<cstdlib>
#include"admin_functions.cpp"

using namespace std;


int main(){

int x=0,f=0;
    user_login ul;
    admin_functions af;
    student_details sd;
    admin_Interface *afp;
    student_Interface *sdp;
    afp=&af;
    sdp=&sd;
    cout<<"WELCOME TO THE EXAMINATION SYSTEM"<<endl;

    while(1){
    cout<<"1.LOGIN "<<endl<< "2.EXIT "<<endl;
    char ch;
    cin>>ch;

    switch(ch){
        case '1':x=ul.login();
        if(x==1)
        {
            f=sdp->student();
            if(f==1)
          main();
      }
        else
        {
           f=afp->admin();
           if(f==1)
           main();
       }
        break;
        case '2':exit(0);
        break;
        default:cout<<"wrong choice"<<endl;

    }
}
    return 0;

}
