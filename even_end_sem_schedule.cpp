using namespace std;
void even_end_sem(){
char a[200];
fstream f;
f.open("evenendsem2.csv",ios::in);
while(!f.eof()){
f.getline(a,200,',');
cout<<a;

}
f.close();



}
