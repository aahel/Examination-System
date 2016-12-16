
using namespace std;
void end_sem_sitting(){
char a[200];
fstream f;
f.open("endsemsitting.csv",ios::in);
while(!f.eof()){
f.getline(a,200,',');
cout<<a;

}
f.close();


}
