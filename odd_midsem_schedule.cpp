using namespace std;
void odd_mid_sem(){
char a[200];
fstream f;
f.open("oddmidsem1.csv",ios::in);
while(!f.eof()){
f.getline(a,200,',');
cout<<a;

}
f.close();



}
