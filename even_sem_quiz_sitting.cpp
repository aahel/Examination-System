
using namespace std;
void even_sem_quiz_sitting(){
char a[200];
fstream f;
f.open("even_sem_quiz_sitting.csv",ios::in);
while(!f.eof()){
f.getline(a,200,',');
cout<<a;

}
f.close();


}
