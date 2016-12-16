#include<iostream>
using namespace std;
#include<cstdlib>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include"student_details.cpp"
fstream ob,ob1,ob2;

class admin_Interface
{
	public:
		 virtual void write(int semno ,int branch,int stp,int endp)=0;
   		 virtual void update(int semno,int branch,int stp,int endp)=0;
    	 virtual void update1(int semno,int branch,int stp,int endp)=0;
		 virtual int admin(void)=0;
};


class admin_functions:public admin_Interface,public user_login
{
public:
    void write(int semno ,int branch,int stp,int endp);
    void update(int semno,int branch,int stp,int endp);
    void update1(int semno,int branch,int stp,int endp);
    int admin(void);
};


void admin_functions::write(int semno,int branch,int stp,int endp)
{

	switch(semno)
	{

		case 1:{

			     switch(branch)
			     {
						case 1:{


                                     if(stp!=4)
                                     {
                                      ob.open("1stcseoddsem.csv",ios::in);
								 update(semno,branch,stp,endp);
                             }
                             else{
                                 ob.open("1stcseoddsem.csv",ios::in);
                            update1(semno,branch,stp,endp);
                        }

							     break;

						       }
						case 2:{
                            if(stp!=4)
                            {
								 ob.open("1stetcoddsem.csv",ios::in);

								  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("1stetcoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                         }
							     break;
						       }
						case 3:{
                            if(stp!=4)
                            {
                                ob.open("1steeeoddsem.csv",ios::in);

                                 update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("1steeeoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                         }
                                break;
						       }
						case 4:{
                            if(stp!=4)
                            {
                                ob.open("1stitoddsem.csv",ios::in);

                                 update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("1stitoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                         }
                                break;
						       }
				 }
			     break;
		       }
		case 2:{
			     switch(branch)
			     {
						case 1:{
                            if(stp!=4)
                            {
                                 ob.open("1stcseevensem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("1stcseevensem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                                 break;
						       }
						case 2:{
                            if(stp!=4)
                            {
                                 ob.open("1stetcevensem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("1stetcevensem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                                 break;
						       }
						case 3:{
                            if(stp!=4)
                        {
                             ob.open("1steeeevensem.csv",ios::in);

                              update(semno,branch,stp,endp);
                          }
                          else{
                              ob.open("1steeeevensem.csv",ios::in);
                         update1(semno,branch,stp,endp);
                        }
                             break;
						       }
						case 4:{if(stp!=4)
                        {
                             ob.open("1stitevensem.csv",ios::in);

                              update(semno,branch,stp,endp);
                          }
                          else{
                              ob.open("1stitevensem.csv",ios::in);
                         update1(semno,branch,stp,endp);
                        }
                             break;
						       }
				 }
			     break;
		       }
		case 3:{
			     switch(branch)
			     {
						case 1:{
                            if(stp!=4)
                            {
                                 ob.open("2ndcseoddsem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("2ndcseoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                                 break;
						       }
						case 2:{
                            if(stp!=4)
                            {
                                 ob.open("2ndetcoddsem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("2ndetcoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 3:{
                            if(stp!=4)
                            {
                                 ob.open("2ndeeeoddsem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("2ndeeeoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 4:{
                            if(stp!=4)
                            {
                                 ob.open("2nditoddsem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("2nditoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
				 }
			     break;
		       }
		case 4:{
			     switch(branch)
			     {
						case 1:{
                            if(stp!=4)
                            {
                                 ob.open("2ndcseevensem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("2ndcseevensem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 2:{
                            if(stp!=4)
                            {
                                 ob.open("2ndetcevensem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("2ndetcevensem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 3:{
                            if(stp!=4)
                            {
                                 ob.open("2ndeeeevensem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("2ndeeeevensem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 4:{
                            if(stp!=4)
                            {
                                 ob.open("2nditevensem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("2nditevensem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
				 }
			     break;
		       }
		case 5:{
			     switch(branch)
			     {
						case 1:{
                            if(stp!=4)
                            {
                                 ob.open("3rdcseoddsem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("3rdcseoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 2:{
                            if(stp!=4)
                            {
                                 ob.open("3rdetcoddsem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("3rdetcoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 3:{
                            if(stp!=4)
                            {
                                 ob.open("3rdeeeoddsem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("3rdeeeoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 4:{
                            if(stp!=4)
                            {
                                 ob.open("3rditoddsem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("3rditoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
				 }
			     break;
		       }
		case 6:{
			     switch(branch)
			     {
						case 1:{
                            if(stp!=4)
                            {
                                 ob.open("3rdcseevensem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("3rdcseevensem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 2:{
                            if(stp!=4)
                            {
                                 ob.open("3rdetcevensem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("3rdetcevensem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 3:{
                            if(stp!=4)
                            {
                                 ob.open("3rdeeeevensem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("3rdeeeevensem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 4:{
                            if(stp!=4)
                            {
                                 ob.open("3rditevensem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("3rditevensem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
				 }
			     break;
		       }
		case 7:{
			     switch(branch)
			     {
						case 1:{
                            if(stp!=4)
                            {
                                 ob.open("4thcseoddsem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("4thcseoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 2:{
                            if(stp!=4)
                            {
                                 ob.open("4thetcoddsem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("4thetcoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 3:{
                            if(stp!=4)
                            {
                                 ob.open("4theeeoddsem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("4theeeoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 4:{
                            if(stp!=4)
                            {
                                 ob.open("4thitoddsem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("4thitoddsem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
				 }
			     break;
		       }
		case 8:{
			     switch(branch)
			     {
						case 1:{
                            if(stp!=4)
                            {
                                 ob.open("4thcseevensem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("4thcseevensem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 2:{
                            if(stp!=4)
                            {
                                 ob.open("4thetcevensem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("4thetcevensem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 3:{
                            if(stp!=4)
                            {
                                 ob.open("4theeeevensem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("4theeeevensem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
						case 4:{
                            if(stp!=4)
                            {
                                 ob.open("4thitevensem.csv",ios::in);

                                  update(semno,branch,stp,endp);
                              }
                              else{
                                  ob.open("4thitevensem.csv",ios::in);
                             update1(semno,branch,stp,endp);
                            }
                            break;
						       }
				 }
			     break;
		       }

	}
	ob.seekp(0);
}
void admin_functions::update(int semno,int branch,int stp,int endp)
{

	string str1,str2,str3,str4;
    float mark[6];int i=0,j=1;

    cout<<"enter id"<<endl;
    cin>>str1;


	ob1.open("temp.csv",ios::out);

	if(semno%2==0)
	{
	  ob2.open("evensub.csv",ios::in);
    }
    else
    {
		ob2.open("oddsub.csv",ios::in);
	}

	  while(ob2)
	  {
		getline(ob2,str4,',');
		cout<<str4;
	  }

	for(int m=0;m<6;m++)
	{
		cout<<"Enter the mark of sub"<<m+1<<endl;
		cin>>mark[m];

	}
	while(ob)
	{
      getline(ob,str2,',');
      ob1<<str2;
	  if(str2!="\n")
      ob1<<',';
      if(str1==str2)
      {
          for(int l=0;l<stp;l++)
          {
              getline(ob,str3,',');
              ob1<<str3<<',';
          }
          getline(ob,str3,',');
          ob1<<mark[i]<<',';
          i++;
          for(int k=0;k<endp;k++)
          {
            getline(ob,str3,',');
            ob1<<str3<<',';
            if(j%4==0&&i<6)
            {
                getline(ob,str3,',');
                ob1<<mark[i]<<',';
                i++;
            }
            j++;
          }


      }

   }


   ob.close();
   ob1.close();
   ob2.close();

   	switch(semno)
	{
		case 1:{
			     switch(branch)
			     {
						case 1:{
								 remove("1stcseoddsem.csv");
								 rename("temp.csv","1stcseoddsem.csv");
							     break;
						       }
						case 2:{
								 remove("1stetcoddsem.csv");
								 rename("temp.csv","1stetcoddsem.csv");
							     break;
						       }
						case 3:{
								  remove("1steeeoddsem.csv");
								 rename("temp.csv","1steeeoddsem.csv");
							     break;
						       }
						case 4:{
								  remove("1stitoddsem.csv");
								 rename("temp.csv","1stitoddsem.csv");
							     break;
						       }
				 }
			     break;
		       }
		case 2:{
			     switch(branch)
			     {
						case 1:{

								  remove("1stcseevensem.csv");
								 rename("temp.csv","1stcseevensem.csv");
							     break;
						       }
						case 2:{
								  remove("1stetcevensem.csv");
								 rename("temp.csv","1stetcevensem.csv");
							     break;
						       }
						case 3:{
								  remove("1steeeevensem.csv");
								 rename("temp.csv","1steeeevensem.csv");
							     break;
						       }
						case 4:{
								 remove("1stitevensem.csv");
								 rename("temp.csv","1stitevensem.csv");
							     break;
						       }
				 }
			     break;
		       }
		case 3:{
			     switch(branch)
			     {
						case 1:{
								  remove("2ndcseoddsem.csv");
								 rename("temp.csv","2ndcseoddsem.csv");
							     break;
						       }
						case 2:{
								 remove("2ndetcoddsem.csv");
								 rename("temp.csv","2ndetcoddsem.csv");
							     break;
						       }
						case 3:{
								  remove("2ndeeeoddsem.csv");
								 rename("temp.csv","2ndeeeoddsem.csv");
							     break;
						       }
						case 4:{
								  remove("2nditoddsem.csv");
								 rename("temp.csv","2nditoddsem.csv");
							     break;
						       }
				 }
			     break;
		       }
		case 4:{
			     switch(branch)
			     {
						case 1:{
								  remove("2ndcseevensem.csv");
								 rename("temp.csv","2ndcseevensem.csv");
							     break;
						       }
						case 2:{
								  remove("2ndetcevensem.csv");
								 rename("temp.csv","2ndetcevensem.csv");
							     break;
						       }
						case 3:{
								  remove("2ndeeeevensem.csv");
								 rename("temp.csv","2ndeeeevensem.csv");
							     break;
						       }
						case 4:{
								  remove("2nditevensem.csv");
								 rename("temp.csv","2nditevensem.csv");
							     break;
						       }
				 }
			     break;
		       }
		case 5:{
			     switch(branch)
			     {
						case 1:{
								  remove("3rdcseoddsem.csv");
								 rename("temp.csv","3rdcseoddsem.csv");
							     break;
						       }
						case 2:{
								 remove("3rdetcoddsem.csv");
								 rename("temp.csv","3rdetcoddsem.csv");
							     break;
						       }
						case 3:{
								  remove("3rdeeeoddsem.csv");
								 rename("temp.csv","3rdeeeoddsem.csv");
							     break;
						       }
						case 4:{
								  remove("3rditoddsem.csv");
								 rename("temp.csv","3rditoddsem.csv");
							     break;
						       }
				 }
			     break;
		       }
		case 6:{
			     switch(branch)
			     {
					case 1:{
								  remove("3rdcseevensem.csv");
								 rename("temp.csv","3rdcseevensem.csv");
							     break;
						       }
						case 2:{
								  remove("3rdetcevensem.csv");
								 rename("temp.csv","3rdetcevensem.csv");
							     break;
						       }
						case 3:{
								  remove("3rdeeeevensem.csv");
								 rename("temp.csv","3rdeeeevensem.csv");
							     break;
						       }
						case 4:{
								  remove("3rditevensem.csv");
								 rename("temp.csv","3rditevensem.csv");
							     break;
						       }
				 }
			     break;
		       }
		case 7:{
			     switch(branch)
			     {
						case 1:{
								  remove("4thcseoddsem.csv");
								 rename("temp.csv","4thcseoddsem.csv");
							     break;
						       }
						case 2:{
								 remove("4thetcoddsem.csv");
								 rename("temp.csv","4thetcoddsem.csv");
							     break;
						       }
						case 3:{
								  remove("4theeeoddsem.csv");
								 rename("temp.csv","4theeeoddsem.csv");
							     break;
						       }
						case 4:{
								  remove("4thitoddsem.csv");
								 rename("temp.csv","4thitoddsem.csv");
							     break;
						       }
				 }
			     break;
		       }
		case 8:{
			     switch(branch)
			     {
					  	case 1:{
								  remove("4thcseevensem.csv");
								 rename("temp.csv","4thcseevensem.csv");
							     break;
						       }
						case 2:{
								  remove("4thetcevensem.csv");
								 rename("temp.csv","4thetcevensem.csv");
							     break;
						       }
						case 3:{
								  remove("4theeeevensem.csv");
								 rename("temp.csv","4theeeevensem.csv");
							     break;
						       }
						case 4:{
								  remove("4thitevensem.csv");
								 rename("temp.csv","4thitevensem.csv");
							     break;
						       }
				 }
			     break;
		       }

	}


}
float string_to_float(string str)
{
    float f;
    try{
         f=stof(str);
    }
    catch(...)
    {
        return 0.0;
    }
    return f;

}

void admin_functions::update1(int semno,int branch,int stp,int endp)
{


    int i=0,j,k=0,l,c=0,y=0,x=0;
    float total,mark=0.0,tgpa=0.0,gpa[100];
    float sgpa[100],cgpa[100];
//    for(int z=0;z<100;z++)
    //total[z]=0.0;
    string str,str1;

//ob1.open("temp.csv",ios::out);


    while(c<5)
    {

        c++;y=0;tgpa=0.0;
        ob1.open("temp.csv",ios::app);
        for(l=0;l<2;l++)
        {
            getline(ob,str,',');

            ob1<<str<<',';
            //cin>>k;


        }



        for(j=0;j<6;j++)
        {
            total=0.0;
            for(k=0;k<4;k++)
            {
                getline(ob,str,',');
                ob1<<str<<',';


                    mark=string_to_float(str);
                total=mark+total;

            }
            getline(ob,str,',');
            //mark=string_to_float(str);
        //total=mark+total;


             gpa[y]=total/10.0;



            ob1<<gpa[y]<<',';

            y++;





        }

        for(i=0;i<6;i++)
        {
        tgpa=tgpa+gpa[i];
        }
        cgpa[x]=tgpa/6.0;
        ob1<<cgpa[x]<<',';
        x++;

        getline(ob,str,',');
        ob1.close();

    }
    ob.close();
   // ob1.close();
    switch(semno)
	{
		case 1:{
			     switch(branch)
			     {
						case 1:{
								 remove("1stcseoddsem.csv");
								 rename("temp.csv","1stcseoddsem.csv");

							     break;
						       }
						case 2:{
								 remove("1stetcoddsem.csv");
								 rename("temp.csv","1stetcoddsem.csv");
							     break;
						       }
						case 3:{
								  remove("1steeeoddsem.csv");
								 rename("temp.csv","1steeeoddsem.csv");
							     break;
						       }
						case 4:{
								  remove("1stitoddsem.csv");
								 rename("temp.csv","1stitoddsem.csv");
							     break;
						       }
				 }
			     break;
		       }
		case 2:{
			     switch(branch)
			     {
						case 1:{

								  remove("1stcseevensem.csv");
								 rename("temp.csv","1stcseevensem.csv");
							     break;
						       }
						case 2:{
								  remove("1stetcevensem.csv");
								 rename("temp.csv","1stetcevensem.csv");
							     break;
						       }
						case 3:{
								  remove("1steeeevensem.csv");
								 rename("temp.csv","1steeeevensem.csv");
							     break;
						       }
						case 4:{
								 remove("1stitevensem.csv");
								 rename("temp.csv","1stitevensem.csv");
							     break;
						       }
				 }
			     break;
		       }
		case 3:{
			     switch(branch)
			     {
						case 1:{
								  remove("2ndcseoddsem.csv");
								 rename("temp.csv","2ndcseoddsem.csv");
							     break;
						       }
						case 2:{
								 remove("2ndetcoddsem.csv");
								 rename("temp.csv","2ndetcoddsem.csv");
							     break;
						       }
						case 3:{
								  remove("2ndeeeoddsem.csv");
								 rename("temp.csv","2ndeeeoddsem.csv");
							     break;
						       }
						case 4:{
								  remove("2nditoddsem.csv");
								 rename("temp.csv","2nditoddsem.csv");
							     break;
						       }
				 }
			     break;
		       }
		case 4:{
			     switch(branch)
			     {
						case 1:{
								  remove("2ndcseevensem.csv");
								 rename("temp.csv","2ndcseevensem.csv");
							     break;
						       }
						case 2:{
								  remove("2ndetcevensem.csv");
								 rename("temp.csv","2ndetcevensem.csv");
							     break;
						       }
						case 3:{
								  remove("2ndeeeevensem.csv");
								 rename("temp.csv","2ndeeeevensem.csv");
							     break;
						       }
						case 4:{
								  remove("2nditevensem.csv");
								 rename("temp.csv","2nditevensem.csv");
							     break;
						       }
				 }
			     break;
		       }
		case 5:{
			     switch(branch)
			     {
						case 1:{
								cout<<"Debasrit"<<endl;
								  remove("3rdcseoddsem.csv");
								 rename("temp.csv","3rdcseoddsem.csv");
							     break;
						       }
						case 2:{
								 remove("3rdetcoddsem.csv");
								 rename("temp.csv","3rdetcoddsem.csv");
							     break;
						       }
						case 3:{
								  remove("3rdeeeoddsem.csv");
								 rename("temp.csv","3rdeeeoddsem.csv");
							     break;
						       }
						case 4:{
								  remove("3rditoddsem.csv");
								 rename("temp.csv","3rditoddsem.csv");
							     break;
						       }
				 }
			     break;
		       }
		case 6:{
			     switch(branch)
			     {
					case 1:{
								  remove("3rdcseevensem.csv");
								 rename("temp.csv","3rdcseevensem.csv");
							     break;
						       }
						case 2:{
								  remove("3rdetcevensem.csv");
								 rename("temp.csv","3rdetcevensem.csv");
							     break;
						       }
						case 3:{
								  remove("3rdeeeevensem.csv");
								 rename("temp.csv","3rdeeeevensem.csv");
							     break;
						       }
						case 4:{
								  remove("3rditevensem.csv");
								 rename("temp.csv","3rditevensem.csv");
							     break;
						       }
				 }
			     break;
		       }
		case 7:{
			     switch(branch)
			     {
						case 1:{
								  remove("4thcseoddsem.csv");
								 rename("temp.csv","4thcseoddsem.csv");
							     break;
						       }
						case 2:{
								 remove("4thetcoddsem.csv");
								 rename("temp.csv","4thetcoddsem.csv");
							     break;
						       }
						case 3:{
								  remove("4theeeoddsem.csv");
								 rename("temp.csv","4theeeoddsem.csv");
							     break;
						       }
						case 4:{
								  remove("4thitoddsem.csv");
								 rename("temp.csv","4thitoddsem.csv");
							     break;
						       }
				 }
			     break;
		       }
		case 8:{
			     switch(branch)
			     {
					  	case 1:{
								  remove("4thcseevensem.csv");
								 rename("temp.csv","4thcseevensem.csv");
							     break;
						       }
						case 2:{
								  remove("4thetcevensem.csv");
								 rename("temp.csv","4thetcevensem.csv");
							     break;
						       }
						case 3:{
								  remove("4theeeevensem.csv");
								 rename("temp.csv","4theeeevensem.csv");
							     break;
						       }
						case 4:{
								  remove("4thitevensem.csv");
								 rename("temp.csv","4thitevensem.csv");
							     break;
						       }
				 }
			     break;
		       }

	}





}


int admin_functions::admin()
{       int x=0;
    while(x!=5)
    {
        system("clear");
        int ch;
        cout<<"1.UPDATE STUDENT DETAILS"<<endl;
        cout<<"2.CALCULATE"<<endl;
        cout<<"3.CHANGE PASSWORD"<<endl;
        cout<<"4.LOGOUT"<<endl;
        cout<<"------------------------------------------"<<endl;
    	cout<<"                                          "<<endl;
    	cout<<"                                          "<<endl;
        cout<<"ENTER YOUR CHOICE"<<endl;
        cin>>ch;

        switch(ch){

    	case 1:{

            int d=0;
    	while(d!=2)
        {
            system("clear");
    	cout<<"1.Btech"<<endl;
    	cout<<"2.Back"<<endl;
    	cout<<"------------------------------------------"<<endl;
    	cout<<"                                          "<<endl;
    	cout<<"                                          "<<endl;
    	cout<<"Enter your choice"<<endl;
    	cin>>d;
    	cout<<"                                          "<<endl;
    	switch(d)
    	{
    		case 1:{
    				int c=1;
    				while(c!=9)
    				{
                        system("clear");
    				cout<<"1.1st sem"<<endl;
    				cout<<"2.2nd sem"<<endl;
    				cout<<"3.3rd sem"<<endl;
    				cout<<"4.4th sem"<<endl;
    				cout<<"5.5th sem"<<endl;
    				cout<<"6.6th sem"<<endl;
    				cout<<"7.7th sem"<<endl;
    				cout<<"8.8th sem"<<endl;
    				cout<<"9.Back"<<endl;
    				cout<<"---------------------------------------------"<<endl;
    				cout<<"                                             "<<endl;
    				cout<<"                                             "<<endl;
    				cout<<"Enter your choice"<<endl;
    				cin>>c;
    				cout<<"                                          "<<endl;
    				switch(c)
    				{
    					case 1:{
    							int i=1;
    							int b=1;
    							while(b!=5)
    							{
                                    system("clear");
    							cout<<"1.CSE"<<endl;
    							cout<<"2.ETC"<<endl;
    							cout<<"3.EEE"<<endl;
    							cout<<"4.IT"<<endl;
    							cout<<"5.Back"<<endl;
    							cout<<"---------------------------------------------"<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"Enter your choice"<<endl;
    							cin>>b;
    							cout<<"                                          "<<endl;
    							switch(b)
    							{
    								case 1:{
    										int branch=1;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    			cout<<"1.midsem"<<endl;
    							    			cout<<"2.endsem"<<endl;
    							    			cout<<"3.quiz"<<endl;
    							    			cout<<"4.Teacher's Assignment"<<endl;
    							    			cout<<"5.Back"<<endl;
    							    			cout<<"------------------------------------------"<<endl;
    											cout<<"                                          "<<endl;
    											cout<<"                                          "<<endl;
    							    			cout<<"Enter your choice"<<endl;
    							    			cin>>a;
    							    			switch(a)
    							    			{
    												case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       	   }
    												case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    												case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    												case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											    case 5:{
    												         a=5;
    												       }
    												default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													    }

    									        }
    									   }
    									    break;
    								       }
    								case 2:{
    										int branch=2;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													    }

    										}
    								       }
    									    break;
    								       }
    								case 3:{
    										int branch=3;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    												}

    										}
    								       }
    									    break;
    								       }
    								case 4:{
    										int branch=4;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}

    										}
    									   }
    									    break;
    								       }
    								       case 5:{
    												b=5;
    								       	        break;
    								              }
    								        default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}



    							}
    						   }
    							break;
    					       }
    					case 2:{
    						    int i=2;
    							int b=1;
    							while(b!=5)
    							{
                                    system("clear");
    							cout<<"1.CSE"<<endl;
    							cout<<"2.ETC"<<endl;
    							cout<<"3.EEE"<<endl;
    							cout<<"4.IT"<<endl;
    							cout<<"5.Back"<<endl;
    							cout<<"-------------------------------------------- "<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"Enter your choice"<<endl;
    							cin>>b;
    							cout<<"                                          "<<endl;
    							switch(b)
    							{
    								case 1:{
    										int branch=1;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    									   }
    									    break;
    								       }
    								case 2:{
    										int branch=2;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    									   }
    									    break;
    								       }
    								case 3:{
    										int branch=3;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    									   }
    									    break;
    								       }
    								case 4:{
    										int branch=4;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    									   }
    									    break;
    								       }
    								case 5:{
    										  b=5;
    									      break;
    								       }
    								default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}




    							}
    						   }
    							break;
    					       }
    					case 3:{
    							int i=3;
    							int b=1;
    							while(b!=5)
    							{
                                    system("clear");
    							cout<<"1.CSE"<<endl;
    							cout<<"2.ETC"<<endl;
    							cout<<"3.EEE"<<endl;
    							cout<<"4.IT"<<endl;
    							cout<<"5.Back"<<endl;
    							cout<<"---------------------------------------------"<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"Enter your choice"<<endl;
    							cin>>b;
    							cout<<"                                          "<<endl;
    							switch(b)
    							{
    								case 1:{
    										int branch=1;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    			cout<<"1.midsem"<<endl;
    							    			cout<<"2.endsem"<<endl;
    							    			cout<<"3.quiz"<<endl;
    							    			cout<<"4.Teacher's Assignment"<<endl;
    							    			cout<<"5.Back"<<endl;
    							    			cout<<"------------------------------------------"<<endl;
    											cout<<"                                          "<<endl;
    											cout<<"                                          "<<endl;
    							    			cout<<"Enter your choice"<<endl;
    							    			cin>>a;
    							    			switch(a)
    							    			{
    												case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       	   }
    												case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    												case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    												case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											    case 5:{
    												         a=5;
    													}
    												default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    									        }
    									   }
    									    break;
    								       }
    								case 2:{
    										int branch=2;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    								       }
    									    break;
    								       }
    								case 3:{
    										int branch=3;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    								       }
    									    break;
    								       }
    								case 4:{
    										int branch=4;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    									   }
    									    break;
    								       }
    								       case 5:{
    												b=5;
    								       	        break;
    								              }
    								        default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}



    							}
    						   }

    						     break;
    					       }
    					case 4:{
    							int i=4;
    							int b=1;
    							while(b!=5)
    							{
                                    system("clear");
    							cout<<"1.CSE"<<endl;
    							cout<<"2.ETC"<<endl;
    							cout<<"3.EEE"<<endl;
    							cout<<"4.IT"<<endl;
    							cout<<"5.Back"<<endl;
    							cout<<"---------------------------------------------"<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"Enter your choice"<<endl;
    							cin>>b;
    							cout<<"                                          "<<endl;
    							switch(b)
    							{
    								case 1:{
    										int branch=1;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    			cout<<"1.midsem"<<endl;
    							    			cout<<"2.endsem"<<endl;
    							    			cout<<"3.quiz"<<endl;
    							    			cout<<"4.Teacher's Assignment"<<endl;
    							    			cout<<"5.Back"<<endl;
    							    			cout<<"------------------------------------------"<<endl;
    										    cout<<"                                          "<<endl;
    										    cout<<"                                          "<<endl;
    							    			cout<<"Enter your choice"<<endl;
    							    			cin>>a;
    							    			switch(a)
    							    			{
    												case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       	   }
    												case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    												case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    												case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											    case 5:{
    												         a=5;
    													}
    												default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    									        }
    									   }
    									    break;
    								       }
    								case 2:{
    										int branch=2;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    								       }
    									    break;
    								       }
    								case 3:{
    										int branch=3;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    								       }
    									    break;
    								       }
    								case 4:{
    										int branch=4;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    									   }
    									    break;
    								       }
    								       case 5:{
    												b=5;
    								       	        break;
    								              }
    								        default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}



    							}
    						   }
    							break;
    					       }
    				    case 5:{
    							int i=5;
    							int b=1;
    							while(b!=5)
    							{
                                    system("clear");
    							cout<<"1.CSE"<<endl;
    							cout<<"2.ETC"<<endl;
    							cout<<"3.EEE"<<endl;
    							cout<<"4.IT"<<endl;
    							cout<<"5.Back"<<endl;
    							cout<<"---------------------------------------------"<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"Enter your choice"<<endl;
    							cin>>b;
    							cout<<"                                          "<<endl;
    							switch(b)
    							{
    								case 1:{
    										int branch=1;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    			cout<<"1.midsem"<<endl;
    							    			cout<<"2.endsem"<<endl;
    							    			cout<<"3.quiz"<<endl;
    							    			cout<<"4.Teacher's Assignment"<<endl;
    							    			cout<<"5.Back"<<endl;
    							    			cout<<"------------------------------------------"<<endl;
    										    cout<<"                                          "<<endl;
    											cout<<"                                          "<<endl;
    							    			cout<<"Enter your choice"<<endl;
    							    			cin>>a;
    							    			switch(a)
    							    			{
    												case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       	   }
    												case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    												case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    												case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											    case 5:{
    												         a=5;
    													}
    												default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    									        }
    									   }
    									    break;
    								       }
    								case 2:{
    										int branch=2;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    								       }
    									    break;
    								       }
    								case 3:{
    										int branch=3;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    												   }
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    								       }
    									    break;
    								       }
    								case 4:{
    										int branch=4;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    									   }
    									    break;
    								       }
    								       case 5:{
    												b=5;
    								       	        break;
    								              }
    								        default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}



    							}
    						   }
    							break;
    					       }
    					case 6:{
    							int i=6;
    							int b=1;
    							while(b!=5)
    							{
                                    system("clear");
    							cout<<"1.CSE"<<endl;
    							cout<<"2.ETC"<<endl;
    							cout<<"3.EEE"<<endl;
    							cout<<"4.IT"<<endl;
    							cout<<"5.Back"<<endl;
    							cout<<"---------------------------------------------"<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"Enter your choice"<<endl;
    							cin>>b;
    							cout<<"                                          "<<endl;
    							switch(b)
    							{
    								case 1:{
    										int branch=1;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    			cout<<"1.midsem"<<endl;
    							    			cout<<"2.endsem"<<endl;
    							    			cout<<"3.quiz"<<endl;
    							    			cout<<"4.Teacher's Assignment"<<endl;
    							    			cout<<"5.Back"<<endl;
    							    			cout<<"------------------------------------------"<<endl;
    											cout<<"                                          "<<endl;
    											cout<<"                                          "<<endl;
    							    			cout<<"Enter your choice"<<endl;
    							    			cin>>a;
    							    			switch(a)
    							    			{
    												case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       	   }
    												case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    												case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    												case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											    case 5:{
    												         a=5;
    													}
    												default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    									        }
    									   }
    									    break;
    								       }
    								case 2:{
    										int branch=2;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    								       }
    									    break;
    								       }
    								case 3:{
    										int branch=3;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    								       }
    									    break;
    								       }
    								case 4:{
    										int branch=4;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    									   }
    									    break;
    								       }
    								case 5:{
    												b=5;
    								       	        break;
    								       }
    								default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}



    							}
    						   }
    							break;
    					       }
    					case 7:{
    							int i=7;
    							int b=1;
    							while(b!=5)
    							{
                                    system("clear");
    							cout<<"1.CSE"<<endl;
    							cout<<"2.ETC"<<endl;
    							cout<<"3.EEE"<<endl;
    							cout<<"4.IT"<<endl;
    							cout<<"5.Back"<<endl;
    							cout<<"-------------------------------------------  "<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"Enter your choice"<<endl;
    							cin>>b;
    							cout<<"                                          "<<endl;
    							switch(b)
    							{
    								case 1:{
    										int branch=1;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    			cout<<"1.midsem"<<endl;
    							    			cout<<"2.endsem"<<endl;
    							    			cout<<"3.quiz"<<endl;
    							    			cout<<"4.Teacher's Assignment"<<endl;
    							    			cout<<"5.Back"<<endl;
    							    			cout<<"------------------------------------------"<<endl;
    											cout<<"                                          "<<endl;
    											cout<<"                                          "<<endl;
    							    			cout<<"Enter your choice"<<endl;
    							    			cin>>a;
    							    			switch(a)
    							    			{
    												case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       	   }
    												case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    												case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    												case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											    case 5:{
    												         a=5;
    													}
    												default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    									        }
    									   }
    									    break;
    								       }
    								case 2:{
    										int branch=2;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    								       }
    									    break;
    								       }
    								case 3:{
    										int branch=3;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    								       }
    									    break;
    								       }
    								case 4:{
    										int branch=4;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    									   }
    									    break;
    								       }
    								case 5:{
    												b=5;
    								       	        break;
    								       }
    								default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}



    							}
    						   }
    							break;
    					       }
    					case 8:{
    							 int i=7;
    							int b=1;
    							while(b!=5)
    							{
                                    system("clear");
    							cout<<"1.CSE"<<endl;
    							cout<<"2.ETC"<<endl;
    							cout<<"3.EEE"<<endl;
    							cout<<"4.IT"<<endl;
    							cout<<"5.Back"<<endl;
    							cout<<"---------------------------------------------"<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"                                             "<<endl;
    							cout<<"Enter your choice"<<endl;
    							cin>>b;
    							cout<<"                                          "<<endl;
    							switch(b)
    							{
    								case 1:{
    										int branch=1;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    			cout<<"1.midsem"<<endl;
    							    			cout<<"2.endsem"<<endl;
    							    			cout<<"3.quiz"<<endl;
    							    			cout<<"4.Teacher's Assignment"<<endl;
    							    			cout<<"5.Back"<<endl;
    							    			cout<<"------------------------------------------"<<endl;
    											cout<<"                                          "<<endl;
    											cout<<"                                          "<<endl;
    							    			cout<<"Enter your choice"<<endl;
    							    			cin>>a;
    							    			switch(a)
    							    			{
    												case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       	   }
    												case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    												case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    												case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											    case 5:{
    												         a=5;
    													}
    												default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    									        }
    									   }
    									    break;
    								       }
    								case 2:{
    										int branch=2;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    								       }
    									    break;
    								       }
    								case 3:{
    										int branch=3;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    								       }
    									    break;
    								       }
    								case 4:{
    										int branch=4;
    										int a=1;
    										while(a!=5)
    										{
                                                system("clear");
    							    		cout<<"1.midsem"<<endl;
    							    		cout<<"2.endsem"<<endl;
    							    		cout<<"3.quiz"<<endl;
    							    		cout<<"4.Teacher's Assignment"<<endl;
    							    		cout<<"5.Back"<<endl;
    							    		cout<<"------------------------------------------"<<endl;
    										cout<<"                                          "<<endl;
    										cout<<"                                          "<<endl;
    							    		cout<<"Enter your choice"<<endl;
    							    		cin>>a;
    							    		switch(a)
    							    		{
    											case 1:{
    												      write(i,branch,0,25);
    												      break;
    											       }
    											case 2:{
    												      write(i,branch,1,26);
    												      break;
    											       }
    											case 3:{
    												      write(i,branch,2,27);
    												      break;
    											       }
    											case 4:{
    												      write(i,branch,3,28);
    												      break;
    											       }
    											case 5:{
    												         a=5;
    													}
    											default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}


    										}
    									   }
    									    break;
    								       }
    								case 5:{
    												b=5;
    								       	        break;
    								        }
    								default:{
    													     cout<<"wrong choice"<<endl;
    													     break;
    													}



    							}
    						   }
    								break;
    							}
    				    case 9:{
    							  c=9;
    				    	      break;
    				           }
    				    default:{      cout<<"wrong choice"<<endl;
    									break;
    													}



    				}
    			   }
    				break;
    		}



    	    case 2:{
    				d=2;
                    break;
    	           }


    	    default:{
    						cout<<"wrong choice"<<endl;
    						break;
    													}

    	}
       }
       break;
   }
    case 2:{


        int d=0;
        while(d!=2)
        {
            system("clear");
            cout<<"1.Btech"<<endl;
            cout<<"2.Back"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"                                          "<<endl;
            cout<<"                                          "<<endl;
            cout<<"Enter your choice"<<endl;
            cin>>d;
            cout<<"                                          "<<endl;
            switch(d)
            {
                case 1:{
                            int c=1;
                            while(c!=9)
                            {
                                system("clear");
                                cout<<"1.1st sem"<<endl;
                                cout<<"2.2nd sem"<<endl;
                                cout<<"3.3rd sem"<<endl;
                                cout<<"4.4th sem"<<endl;
                                cout<<"5.5th sem"<<endl;
                                cout<<"6.6th sem"<<endl;
                                cout<<"7.7th sem"<<endl;
                                cout<<"8.8th sem"<<endl;
                                cout<<"9.Back"<<endl;
                                cout<<"---------------------------------------------"<<endl;
                                cout<<"                                             "<<endl;
                                cout<<"                                             "<<endl;
                                cout<<"Enter your choice"<<endl;
                                cin>>c;
                                cout<<"                                          "<<endl;
                                switch(c)
                                {
                                    case 1:{

                                            int i=1;
                                            int b=1;
                                            while(b!=5)
                                            {
                                                system("clear");
                                                cout<<"1.CSE"<<endl;
                                                cout<<"2.ETC"<<endl;
                                                cout<<"3.EEE"<<endl;
                                                cout<<"4.IT"<<endl;
                                                cout<<"5.Back"<<endl;
                                                cout<<"---------------------------------------------"<<endl;
                                                cout<<"                                             "<<endl;
                                                cout<<"                                             "<<endl;
                                                cout<<"Enter your choice"<<endl;
                                                cin>>b;
                                                cout<<"                                       "<<endl;


                                                switch(b)
                                                {
                                                    case 1:{

                                                            int branch=1;
                                                            write(i,branch,4,29);
                                                            break;
                                                            }
                                                    case 2:{
                                                            int branch=2;
                                                            write(i,branch,4,29);
                                                            break;
                                                            }
                                                    case 3:{
                                                                int branch=3;
                                                                write(i,branch,4,29);
                                                                break;
                                                            }
                                                    case 4:{
                                                            int branch=4;
                                                        write(i,branch,4,29);
                                                        break;
                                                            }
                                                    case 5:{
                                                            b=5;
                                                            break;
                                                            }
                                                    default :{
                                                                 cout<<"Wrong choice"<<endl;
                                                                 break;
                                                            }
                                                }
                                            }

                                            break;
                                        }
                            case 2:{
                                    int i=2;
                                    int b=1;
                                    while(b!=5)
                                    {
                                        system("clear");
                                        cout<<"1.CSE"<<endl;
                                        cout<<"2.ETC"<<endl;
                                        cout<<"3.EEE"<<endl;
                                        cout<<"4.IT"<<endl;
                                        cout<<"5.Back"<<endl;
                                        cout<<"---------------------------------------------"<<endl;
                                        cout<<"                                             "<<endl;
                                        cout<<"                                             "<<endl;
                                        cout<<"Enter your choice"<<endl;
                                        cin>>b;
                                        cout<<"                                          "<<endl;
                                        switch(b)
                                        {
                                            case 1:{
                                                int branch=1;
                                                write(i,branch,4,29);
                                                break;
                                                    }
                                            case 2:{
                                                    int branch=2;
                                                    write(i,branch,4,29);
                                                    break;
                                                    }
                                            case 3:{
                                                        int branch=3;
                                                        write(i,branch,4,29);
                                                        break;
                                                    }
                                            case 4:{
                                                            int branch=4;
                                                            write(i,branch,4,29);
                                                            break;
                                                        }
                                            case 5:{
                                                            b=5;
                                                            break;
                                                            }
                                            default :{
                                                                 cout<<"Wrong choice"<<endl;
                                                                 break;
                                                            }
                                       }

                                     }
                                   break;
                                }
                                case 3:{
                                        int i=3;
                                        int b=1;
                                        while(b!=5)
                                        {
                                            system("clear");
                                            cout<<"1.CSE"<<endl;
                                            cout<<"2.ETC"<<endl;
                                            cout<<"3.EEE"<<endl;
                                            cout<<"4.IT"<<endl;
                                            cout<<"5.Back"<<endl;
                                            cout<<"---------------------------------------------"<<endl;
                                            cout<<"                                             "<<endl;
                                            cout<<"                                             "<<endl;
                                            cout<<"Enter your choice"<<endl;
                                            cin>>b;
                                            cout<<"                                          "<<endl;
                                            switch(b)
                                            {
                                                case 1:{
                                                    int branch=1;
                                                    write(i,branch,4,29);
                                                    break;
                                                        }
                                                case 2:{
                                                        int branch=2;
                                                        write(i,branch,4,29);
                                                        break;
                                                        }
                                                case 3:{
                                                            int branch=3;
                                                            write(i,branch,4,29);
                                                            break;
                                                        }
                                                case 4:{
                                                                int branch=4;
                                                                write(i,branch,4,29);
                                                                break;
                                                            }
                                                case 5:{
                                                            b=5;
                                                            break;
                                                            }
                                                default :{
                                                                 cout<<"Wrong choice"<<endl;
                                                                 break;
                                                            }
                                                }

                                            }
                                      break;
                                   }
                                    case 4:{
                                            int i=4;
                                            int b=1;
                                            while(b!=5)
                                            {
                                                system("clear");
                                                cout<<"1.CSE"<<endl;
                                                cout<<"2.ETC"<<endl;
                                                cout<<"3.EEE"<<endl;
                                                cout<<"4.IT"<<endl;
                                                cout<<"5.Back"<<endl;
                                                cout<<"---------------------------------------------"<<endl;
                                                cout<<"                                             "<<endl;
                                                cout<<"                                             "<<endl;
                                                cout<<"Enter your choice"<<endl;
                                                cin>>b;
                                                cout<<"                                          "<<endl;
                                                switch(b)
                                                    {
                                                    case 1:{
                                                        int branch=1;
                                                        write(i,branch,4,29);
                                                        break;
                                                    }
                                                    case 2:{
                                                            int branch=2;
                                                            write(i,branch,4,29);
                                                            break;
                                                        }
                                                    case 3:{
                                                                int branch=3;
                                                                write(i,branch,4,29);
                                                                break;
                                                            }
                                                    case 4:{
                                                                    int branch=4;
                                                                    write(i,branch,4,29);
                                                                    break;
                                                                }
                                                    case 5:{
                                                            b=5;
                                                            break;
                                                            }
                                                    default :{
                                                                 cout<<"Wrong choice"<<endl;
                                                                 break;
                                                            }
                                                    }

                                        }
                                        break;
                                    }
                                        case 5:{
                                                int i=5;
                                                int b=1;
                                                while(b!=5)
                                                {
                                                    system("clear");
                                                cout<<"1.CSE"<<endl;
                                                cout<<"2.ETC"<<endl;
                                                cout<<"3.EEE"<<endl;
                                                cout<<"4.IT"<<endl;
                                                cout<<"5.Back"<<endl;
                                                cout<<"---------------------------------------------"<<endl;
                                                cout<<"                                             "<<endl;
                                                cout<<"                                             "<<endl;
                                                cout<<"Enter your choice"<<endl;
                                                cin>>b;
                                                cout<<"                                          "<<endl;
                                                switch(b)
                                                {
                                                    case 1:{
                                                            int branch=1;
                                                            write(i,branch,4,29);
                                                            break;
                                                        }
                                                    case 2:{
                                                                int branch=2;
                                                                write(i,branch,4,29);
                                                                break;
                                                            }
                                                    case 3:{
                                                                    int branch=3;
                                                                    write(i,branch,4,29);
                                                                    break;
                                                                }
                                                    case 4:{
                                                                        int branch=4;
                                                                        write(i,branch,4,29);
                                                                        break;
                                                                    }
                                                    case 5:{
                                                            b=5;
                                                            break;
                                                            }
                                                    default :{
                                                                 cout<<"Wrong choice"<<endl;
                                                                 break;
                                                            }
                                                }

                                            }
                                            break;
                                        }
                                            case 6:{
                                                    int i=6;
                                                    int b=1;
                                                    while(b!=5)
                                                    {
                                                        system("clear");
                                                    cout<<"1.CSE"<<endl;
                                                    cout<<"2.ETC"<<endl;
                                                    cout<<"3.EEE"<<endl;
                                                    cout<<"4.IT"<<endl;
                                                    cout<<"5.Back"<<endl;
                                                    cout<<"---------------------------------------------"<<endl;
                                                    cout<<"                                             "<<endl;
                                                    cout<<"                                             "<<endl;
                                                    cout<<"Enter your choice"<<endl;
                                                    cin>>b;
                                                    cout<<"                                          "<<endl;
                                                    switch(b)
                                                    {
                                                        case 1:{
                                                                int branch=1;
                                                                write(i,branch,4,29);
                                                                break;
                                                            }
                                                		case 2:{
                                                                    int branch=2;
                                                                    write(i,branch,4,29);
                                                                    break;
                                                                }
                                                    	case 3:{
                                                                        int branch=3;
                                                                        write(i,branch,4,29);
                                                                        break;
                                                                    }
                                                    	case 4:{
                                                                            int branch=4;
                                                                            write(i,branch,4,29);
                                                                            break;
                                                                        }
                                                    	case 5:{
                                                            b=5;
                                                            break;
                                                            }
                                                    	default :{
                                                                 cout<<"Wrong choice"<<endl;
                                                                 break;
                                                            }
                                                    }

                                                }
                                                break;
                                            }
                                                case 7:{
                                                        int i=7;
                                                        int b=1;
                                                        while(b!=5)
                                                        {
                                                            system("clear");
                                                        cout<<"1.CSE"<<endl;
                                                        cout<<"2.ETC"<<endl;
                                                        cout<<"3.EEE"<<endl;
                                                        cout<<"4.IT"<<endl;
                                                        cout<<"5.Back"<<endl;
                                                        cout<<"---------------------------------------------"<<endl;
                                                        cout<<"                                             "<<endl;
                                                        cout<<"                                             "<<endl;
                                                        cout<<"Enter your choice"<<endl;
                                                        cin>>b;
                                                        cout<<"                                          "<<endl;
                                                        switch(b)
                                                        {
                                                            case 1:{
                                                                    int branch=1;
                                                                    write(i,branch,4,29);
                                                                    break;
                                                                }
                                                            case 2:{
                                                                        int branch=2;
                                                                        write(i,branch,4,29);
                                                                        break;
                                                                    }
                                                            case 3:{
                                                                            int branch=3;
                                                                            write(i,branch,4,29);
                                                                            break;
                                                                        }
                                                            case 4:{
                                                                                int branch=4;
                                                                                write(i,branch,4,29);
                                                                                break;
                                                                            }
                                                            case 5:{
                                                            		b=5;
                                                            		break;
                                                            }
                                                    		default :{
                                                                 cout<<"Wrong choice"<<endl;
                                                                 break;
                                                            }
                                                        }

                                                    }
                                                    break;
                                                }
                                                    case 8:{
                                                            int i=8;
                                                            int b=1;
                                                            while(b!=5)
                                                            {
                                                                system("clear");
                                                                cout<<"1.CSE"<<endl;
                                                                cout<<"2.ETC"<<endl;
                                                                cout<<"3.EEE"<<endl;
                                                                cout<<"4.IT"<<endl;
                                                                cout<<"5.Back"<<endl;
                                                                cout<<"---------------------------------------------"<<endl;
                                                                cout<<"                                             "<<endl;
                                                                cout<<"                                             "<<endl;
                                                                cout<<"Enter your choice"<<endl;
                                                                cin>>b;
                                                                cout<<"                                          "<<endl;
                                                                switch(b)
                                                                {
                                                                case 1:{
                                                                        int branch=1;
                                                                        write(i,branch,4,29);
                                                                        break;
                                                                    }
                                                                    case 2:{
                                                                            int branch=2;
                                                                            write(i,branch,4,29);
                                                                            break;
                                                                        }
                                                                    case 3:{
                                                                                int branch=3;
                                                                                write(i,branch,4,29);
                                                                                break;
                                                                                }
                                                                    case 4:{
                                                                                    int branch=4;
                                                                                    write(i,branch,4,29);
                                                                                    break;
                                                                                }
                                                                    case 5:{
                                                            					b=5;
                                                            					break;
                                                            				}
                                                    				default :{
                                                                 				cout<<"Wrong choice"<<endl;
                                                                				 break;
                                                            				}
                                                               }
                                                           }
                                                            break;

                                                        }
													case 9:{
																c=9;
														       break;
													       }
													default:{
																cout<<"Wrong choice"<<endl;
																break;
														    }
                                                }

                                            }
                                            break;
                                        }
                                case 2:{
										d=2;
                                	      break;
                                       }
                                default :{
										cout<<"Wrong choice"<<endl;
                                	      break;
                                       }
                                    }
                                }
                                break;
                    }

    case 3:{
            system("clear");
            string op,np,cnp,a,str;
            fstream f;

            while(1){
            cout<<"OLD PASSWORD ----> ";
            cin>>op;
            if(op==m[username])
            break;
            else
            cout<<"wrong password"<<endl;
        }
            f.open("pass.csv",ios::in);


            while(!(a==username))
            getline(f,a,',');


            cout<<"NEW PASSWORD ----> ";;
            cin>>np;
            while(1){
            cout<<"CONFIRM NEW PASSWORD ---->";
            cin>>cnp;
            if(cnp==np)
            break;
            else
            cout<<"wrong password"<<endl;
        }
        fstream f1;
        f1.open("temp.csv",ios::out);
        f.seekg(0);

        while(!f.eof()){
            getline(f,str,',');
        if(str=="\n")
        break;
          if(str==m[username])
            {


                for(int i=0;i<cnp.length();i++)
                    {

                        f1.put(cnp[i]);


                }
                f1.put(',');


            }
            else
            {
            for(int i=0;i<str.length();i++)
                {

                    f1.put(str[i]);


            }
            f1.put(',');
        }
        }
        remove("pass.csv");
        rename("temp.csv","pass.csv");

            f1.close();




        break;

    }
    case 4:{
        x=5;
        break;

    }
}
}
system("clear");
return 1;

    }
