using namespace std;
void odd_sem_quiz_sitting(){
char a[200];
fstream f;
f.open("odd_sem_quiz_sitting.csv",ios::in);
while(!f.eof()){
f.getline(a,200,',');
cout<<a;

}
f.close();

}
