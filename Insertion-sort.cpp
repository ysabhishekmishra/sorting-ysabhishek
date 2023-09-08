#include <iostream>
#include <vector>

using namespace std;

void printv(vector<int>&v){
    int n=v.size();
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}


// Selection Sorting Algorithm

void Selection(vector<int>&v,int n){
    if(n==0)return;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(v[j]<v[i]){
                swap(v[i],v[j]);
            }
        }
    }
}

// Bubble Sorting Algorithm

void Bubble(vector<int>&v,int n){
    if(n==0)return;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(v[j]<v[i]){
                swap(v[i],v[j]);
            }
        }
    }
}



int main(){
    int n;
    cout<<"Enter the sizer of Array:-";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cout<<"Enter the "<<i<<" value of Array:-";
        cin>>v[i];
    }
    cout<<"Select Which algorthim you need"<<endl;
    cout<<"1.Selection Sort"<<endl<<"2.Bubble Sort"<<endl<<"3.Insertion Sort"<<endl<<"4.Merge Sort"<<endl;
    int a;
    cin>>a;
    while(a>0 || a<5){
        if(a==1){
            Selection(v,n);
            printv(v);
            break;
        }
        // else if(a==2){
        //     Bubble(v,n);
        //     printv(v);
        // }
        // else if(a==3){
        //     Insertion(v,n);
        //     printv(v);
        // }
        // else if(a==4){
        //     Merge(v,n);
        //     printv(v);
        // }
    }

    return 0;
}
