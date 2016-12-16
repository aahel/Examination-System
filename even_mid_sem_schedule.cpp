using namespace std;
void even_mid_sem(){
char a[200];
fstream f;
f.open("evenmidsem2.csv",ios::in);
while(!f.eof()){
f.getline(a,200,',');
cout<<a;

}
f.close();



}
