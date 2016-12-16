
using namespace std;
void mid_sem_sitting(){
char a[200];
fstream f;
f.open("midsemsitting.csv",ios::in);
while(!f.eof()){
f.getline(a,200,',');
cout<<a;

}
f.close();



}
