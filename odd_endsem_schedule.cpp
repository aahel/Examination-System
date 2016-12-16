using namespace std;
void odd_end_sem(){
char a[200];
fstream f;
f.open("oddendsem1.csv",ios::in);
while(!f.eof()){
f.getline(a,200,',');
cout<<a;

}
f.close();



}
