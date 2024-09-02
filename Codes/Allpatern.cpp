#include<bits/stdc++.h>
using namespace std;
void patone(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


void pat2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}



void pat3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}



void pat4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}




void pat5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pat6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pat7(int n){
    for(int i=1;i<=n;i++){
        //space 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //star

        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        //space
         for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}



void pat8(int n){
    for(int i=1;i<=n;i++){
        //space 
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=2*n-2*i+2-1;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}


void pat9(int n){
    for(int i=1;i<=n;i++){
        //space 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //star

        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        //space
         for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
     for(int i=1;i<=n;i++){
        //space 
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=2*n-2*i+2-1;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}


    void pat10(int n){
        int k=1;
        for(int i=1;i<=2*n-1;i++){
            if(i<=n){
                for(int j=1;j<=i;j++){
                    cout<<"*";
                }
            }else{
                for(int j=i-2*k;j>=1;j--){
                    cout<<"*";
                }k++;
            }
            cout<<endl;
            

        }
    }




    void pat11(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if((i+j)%2!=0){
                    cout<<"0";
                }else{
                    cout<<"1";
                }
            }
            cout<<endl;
        }
    }




    void pat12(int n){
        for(int i=1;i<=n-1;i++){
            //print
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            //space
            for(int j=1;j<=2*n-2*i-2;j++){
                cout<<" ";
            }
            //star
            for(int j=i;j>=1;j--){
                cout<<j;
            }
            cout<<endl;
        }
    }

    void pat13(int n){
        int cnt=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<cnt;
                cnt++;
            }
            cout<<endl;
        }
    }
    void pat14(int n){
        for(int i=0;i<n;i++){
            for(char j='A';j<='A'+i;j++){
                cout<<j;
            }
            cout<<endl;
        }
    }

      void pat15(int n){
        for(int i=0;i<n;i++){
            for(char j='A'+n-i;j>='A';j--){
                cout<<j;
            }
            cout<<endl;
        }
    }


    void pat15point1(int n){
        for(int i=0;i<n;i++){
            for(char j='A';j<='A'+n-i-1;j++){
                cout<<j;
            }
            cout<<endl;
        }
    }
      void pat16(int n){
        for(int i=0;i<n;i++){
            for(char j='A';j<='A'+i;j++){
                cout<<char(i+'A');
            }
            cout<<endl;
        }
    }
    void pat17(int n){
      for(int i=0;i<n;i++){
          for(int j=0;j<n-i-1;j++){
              cout<<" ";
          }
          char ch = 'A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++){
              
              cout<<ch;
              if(j <= breakpoint) ch++;
              else ch--;
          }
          for(int j=0;j<n-i-1;j++){
              cout<<" ";
          }
          cout<<endl;
          
      }
}

void pat18(int n){
      for(int i=0;i<n;i++){
          for(char ch =('A'+n-1)-i;ch<=('A'+n-1);ch++){
              cout<<ch<<" ";
          }
          cout<<endl;
      }
}



    void pat19(int n){
        for(int i=1;i<=n;i++){
            //print
            for(int j=1;j<=n-i+1;j++){
                cout<<"*";
            }
            //space
            for(int j=1;j<=2*i-2;j++){
                cout<<" ";
            }
            //print
             for(int j=1;j<=n-i+1;j++){
                cout<<"*";
            }
            cout<<endl;
        }

        //inverted
         for(int i=1;i<=n;i++){
            //print
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            //space
            for(int j=1;j<=2*n-2*i;j++){
                cout<<" ";
            }
            //print
             for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

    void pat20(int n){
        for(int i=1;i<=n;i++){
            //print
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            //space
             for(int j=1;j<=2*n-2*i;j++){
                cout<<" ";
            }
            //print
              for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }

        //inbvertd
        for(int i=1;i<=n;i++){
            //print
            for(int j=1;j<=n-i;j++){
                cout<<"*";
            }
            //space
             for(int j=1;j<=2*i;j++){
                cout<<" ";
            }
            //print
              for(int j=1;j<=n-i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        
    }



    void pat21(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==1||j==1||i==n||j==n){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    void pat22(int n){
        for(int i=0;i<n*2-1;i++){
            for(int j=0;j<2*n-1;j++){
                 int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
            cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
            }
            cout<<endl;
        }
    }

int main(){
    int n=5;
    // patone(n);
    // pat2(n);
    // pat3(n);
    // pat4(n);
    // pat5(n);
    // pat6(n);
    // pat7(n);
    // pat8(n);
    // pat9(n);
    // pat10(n);
    // pat11(n);
    // pat12(n);
    // pat13(n);
    // pat14(n);
    // pat15(n);
    // pat15point1(n);
    // pat16(n);
    // pat17(n);
    // pat18(n);
    // pat19(n);
    // pat20(n);
    pat21(n);
    n=4;
    pat22(n);
}